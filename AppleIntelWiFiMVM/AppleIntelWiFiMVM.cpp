#include "AppleIntelWiFiMVM.h"

#define MYNAME "AppleIntelWiFiMVM"
#define super IOService
OSDefineMetaClassAndStructors(AppleIntelWiFiMVM, IOService);

// ------------------------ IOService Methods ----------------------------

bool AppleIntelWiFiMVM::init(OSDictionary *dict) {
    bool res = super::init(dict);
    IOLog("%s::init\n", MYNAME);
    return res;
}

bool AppleIntelWiFiMVM::start(IOService* provider) {
    IOLog("%s::start\n", MYNAME);
    if(!super::start(provider)) {
        IOLog("%s Super start failed\n", MYNAME);
        return false;
    }
    
    // Ensure we have a PCI device provider
    pciDevice = OSDynamicCast(IOPCIDevice, provider);
    if(!pciDevice) {
        IOLog("%s Provider not a PCIDevice\n", MYNAME);
        return false;
    }
    
    UInt16 vendor = pciDevice->configRead16(kIOPCIConfigVendorID);
    UInt16 device = pciDevice->configRead16(kIOPCIConfigDeviceID);
    UInt16 subsystem_vendor = pciDevice->configRead16(kIOPCIConfigSubSystemVendorID);
    UInt16 subsystem_device = pciDevice->configRead16(kIOPCIConfigSubSystemID);
    UInt8 revision = pciDevice->configRead8(kIOPCIConfigRevisionID);

    // Example of how to fake the IDs if you don't have the real hardware on this
    // machine: set these IDs to the device you want it to think you have
//    vendor = 0x8086;
//    subsystem_vendor = 0x8086;
//    device = 0x08b1;
//    subsystem_device = 0x4072;
    // Note that you must also add the device ID & vendor ID of some device you
    // ACTUALLY have to IOPCIPrimaryMatch and also add an IOMatchCategory in
    // Info.plist if you're going to load this driver for some other device

    if(vendor != 0x8086 || subsystem_vendor != 0x8086) {
        IOLog("%s Unrecognized vendor/sub-vendor ID %#06x/%#06x; expecting 0x8086 for both; cannot load driver.\n",
              MYNAME, vendor, subsystem_vendor);
        return false;
    }
    
    const struct wifi_card *card = identifyWiFiCard(device, subsystem_device);
    if(!card) {
        IOLog("%s Card has the right device ID %#06x but unmatched sub-device ID %#06x; cannot load driver.\n",
              MYNAME, device, subsystem_device);
        return false;
    }
    IOLog("%s Found card definition for Vendor %#06x Device %#06x SubVendor %#06x SubDevice %#06x Revision %#04x\n",
            MYNAME, vendor, device, subsystem_vendor, subsystem_device, revision);
    
    pciDevice->retain();
    
    registerService();
    
    return true;
}

void AppleIntelWiFiMVM::stop(IOService* provider) {
    IOLog("%s::stop\n", MYNAME);
    super::stop(provider);
}

void AppleIntelWiFiMVM::free() {
    IOLog("%s::free\n", MYNAME);
    if(pciDevice) {
        pciDevice->release();
        pciDevice = NULL;
    }
    super::free();
}

const struct wifi_card *AppleIntelWiFiMVM::identifyWiFiCard(UInt16 device, UInt16 subdevice) {
    UInt32 i;
    for(i=0; i<sizeof(wifi_card_ids) / sizeof(wifi_card); i++) {
        if(wifi_card_ids[i].device == device && wifi_card_ids[i].subdevice == subdevice)
            return &wifi_card_ids[i];
    }
    
    return NULL;
}
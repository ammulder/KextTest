#include <IOKit/IOLib.h>
#include <IOKit/pci/IOPCIDevice.h>
#include <libkern/OSKextLib.h>
#include "device-list.h"

class AppleIntelWiFiMVM : public IOService {
    OSDeclareDefaultStructors(AppleIntelWiFiMVM);
    
public:
    // --------------- IOService methods ---------------
    virtual bool init(OSDictionary *properties) override;
    virtual bool start(IOService *provider) override;
    virtual void stop(IOService *provider) override;
    virtual void free() override;
    
private:
    // --------------- Methods ---------------
    const struct wifi_card *identifyWiFiCard(UInt16 device, UInt16 subdevice);

    // --------------- Structs ---------------

    // --------------- Variables ---------------
    IOPCIDevice *pciDevice;
};

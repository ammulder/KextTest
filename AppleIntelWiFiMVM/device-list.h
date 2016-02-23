/******************************************************************************
 *
 * This file is provided under a dual BSD/GPLv2 license.  When using or
 * redistributing this file, you may do so under either license.
 *
 * GPL LICENSE SUMMARY
 *
 * Copyright(c) 2007 - 2014 Intel Corporation. All rights reserved.
 * Copyright(c) 2013 - 2015 Intel Mobile Communications GmbH
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110,
 * USA
 *
 * The full GNU General Public License is included in this distribution
 * in the file called COPYING.
 *
 * Contact Information:
 *  Intel Linux Wireless <ilw@linux.intel.com>
 * Intel Corporation, 5200 N.E. Elam Young Parkway, Hillsboro, OR 97124-6497
 *
 * BSD LICENSE
 *
 * Copyright(c) 2005 - 2014 Intel Corporation. All rights reserved.
 * Copyright(c) 2013 - 2015 Intel Mobile Communications GmbH
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name Intel Corporation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *****************************************************************************/

/* This code based on the device list in the
 * "iwlwifi" Linux driver (see iwlwifi/pcie/drv.c)
 * which is licensed under the terms above
 */

#ifndef __MVM_DEVICE_LIST_H
#define __MVM_DEVICE_LIST_H

#define IWL_PCI_DEVICE(dev, subdev) \
.device = (dev), \
.subdevice = (subdev)

struct wifi_card {
    UInt16 device;
    UInt16 subdevice;
};

static const struct wifi_card wifi_card_ids[] = {
    /* 7260 Series */
    {IWL_PCI_DEVICE(0x08B1, 0x4070)},
    {IWL_PCI_DEVICE(0x08B1, 0x4072)},
    {IWL_PCI_DEVICE(0x08B1, 0x4170)},
    {IWL_PCI_DEVICE(0x08B1, 0x4C60)},
    {IWL_PCI_DEVICE(0x08B1, 0x4C70)},
    {IWL_PCI_DEVICE(0x08B1, 0x4060)},
    {IWL_PCI_DEVICE(0x08B1, 0x406A)},
    {IWL_PCI_DEVICE(0x08B1, 0x4160)},
    {IWL_PCI_DEVICE(0x08B1, 0x4062)},
    {IWL_PCI_DEVICE(0x08B1, 0x4162)},
    {IWL_PCI_DEVICE(0x08B2, 0x4270)},
    {IWL_PCI_DEVICE(0x08B2, 0x4272)},
    {IWL_PCI_DEVICE(0x08B2, 0x4260)},
    {IWL_PCI_DEVICE(0x08B2, 0x426A)},
    {IWL_PCI_DEVICE(0x08B2, 0x4262)},
    {IWL_PCI_DEVICE(0x08B1, 0x4470)},
    {IWL_PCI_DEVICE(0x08B1, 0x4472)},
    {IWL_PCI_DEVICE(0x08B1, 0x4460)},
    {IWL_PCI_DEVICE(0x08B1, 0x446A)},
    {IWL_PCI_DEVICE(0x08B1, 0x4462)},
    {IWL_PCI_DEVICE(0x08B1, 0x4870)},
    {IWL_PCI_DEVICE(0x08B1, 0x486E)},
    {IWL_PCI_DEVICE(0x08B1, 0x4A70)},
    {IWL_PCI_DEVICE(0x08B1, 0x4A6E)},
    {IWL_PCI_DEVICE(0x08B1, 0x4A6C)},
    {IWL_PCI_DEVICE(0x08B1, 0x4570)},
    {IWL_PCI_DEVICE(0x08B1, 0x4560)},
    {IWL_PCI_DEVICE(0x08B2, 0x4370)},
    {IWL_PCI_DEVICE(0x08B2, 0x4360)},
    {IWL_PCI_DEVICE(0x08B1, 0x5070)},
    {IWL_PCI_DEVICE(0x08B1, 0x5072)},
    {IWL_PCI_DEVICE(0x08B1, 0x5170)},
    {IWL_PCI_DEVICE(0x08B1, 0x5770)},
    {IWL_PCI_DEVICE(0x08B1, 0x4020)},
    {IWL_PCI_DEVICE(0x08B1, 0x402A)},
    {IWL_PCI_DEVICE(0x08B2, 0x4220)},
    {IWL_PCI_DEVICE(0x08B1, 0x4420)},
    {IWL_PCI_DEVICE(0x08B1, 0xC070)},
    {IWL_PCI_DEVICE(0x08B1, 0xC072)},
    {IWL_PCI_DEVICE(0x08B1, 0xC170)},
    {IWL_PCI_DEVICE(0x08B1, 0xC060)},
    {IWL_PCI_DEVICE(0x08B1, 0xC06A)},
    {IWL_PCI_DEVICE(0x08B1, 0xC160)},
    {IWL_PCI_DEVICE(0x08B1, 0xC062)},
    {IWL_PCI_DEVICE(0x08B1, 0xC162)},
    {IWL_PCI_DEVICE(0x08B1, 0xC770)},
    {IWL_PCI_DEVICE(0x08B1, 0xC760)},
    {IWL_PCI_DEVICE(0x08B2, 0xC270)},
    {IWL_PCI_DEVICE(0x08B1, 0xCC70)},
    {IWL_PCI_DEVICE(0x08B1, 0xCC60)},
    {IWL_PCI_DEVICE(0x08B2, 0xC272)},
    {IWL_PCI_DEVICE(0x08B2, 0xC260)},
    {IWL_PCI_DEVICE(0x08B2, 0xC26A)},
    {IWL_PCI_DEVICE(0x08B2, 0xC262)},
    {IWL_PCI_DEVICE(0x08B1, 0xC470)},
    {IWL_PCI_DEVICE(0x08B1, 0xC472)},
    {IWL_PCI_DEVICE(0x08B1, 0xC460)},
    {IWL_PCI_DEVICE(0x08B1, 0xC462)},
    {IWL_PCI_DEVICE(0x08B1, 0xC570)},
    {IWL_PCI_DEVICE(0x08B1, 0xC560)},
    {IWL_PCI_DEVICE(0x08B2, 0xC370)},
    {IWL_PCI_DEVICE(0x08B1, 0xC360)},
    {IWL_PCI_DEVICE(0x08B1, 0xC020)},
    {IWL_PCI_DEVICE(0x08B1, 0xC02A)},
    {IWL_PCI_DEVICE(0x08B2, 0xC220)},
    {IWL_PCI_DEVICE(0x08B1, 0xC420)},
    
    /* 3160 Series */
    {IWL_PCI_DEVICE(0x08B3, 0x0070)},
    {IWL_PCI_DEVICE(0x08B3, 0x0072)},
    {IWL_PCI_DEVICE(0x08B3, 0x0170)},
    {IWL_PCI_DEVICE(0x08B3, 0x0172)},
    {IWL_PCI_DEVICE(0x08B3, 0x0060)},
    {IWL_PCI_DEVICE(0x08B3, 0x0062)},
    {IWL_PCI_DEVICE(0x08B4, 0x0270)},
    {IWL_PCI_DEVICE(0x08B4, 0x0272)},
    {IWL_PCI_DEVICE(0x08B3, 0x0470)},
    {IWL_PCI_DEVICE(0x08B3, 0x0472)},
    {IWL_PCI_DEVICE(0x08B4, 0x0370)},
    {IWL_PCI_DEVICE(0x08B3, 0x8070)},
    {IWL_PCI_DEVICE(0x08B3, 0x8072)},
    {IWL_PCI_DEVICE(0x08B3, 0x8170)},
    {IWL_PCI_DEVICE(0x08B3, 0x8172)},
    {IWL_PCI_DEVICE(0x08B3, 0x8060)},
    {IWL_PCI_DEVICE(0x08B3, 0x8062)},
    {IWL_PCI_DEVICE(0x08B4, 0x8270)},
    {IWL_PCI_DEVICE(0x08B4, 0x8370)},
    {IWL_PCI_DEVICE(0x08B4, 0x8272)},
    {IWL_PCI_DEVICE(0x08B3, 0x8470)},
    {IWL_PCI_DEVICE(0x08B3, 0x8570)},
    {IWL_PCI_DEVICE(0x08B3, 0x1070)},
    {IWL_PCI_DEVICE(0x08B3, 0x1170)},
    
    /* 3165 Series */
    {IWL_PCI_DEVICE(0x3165, 0x4010)},
    {IWL_PCI_DEVICE(0x3165, 0x4012)},
    {IWL_PCI_DEVICE(0x3166, 0x4212)},
    {IWL_PCI_DEVICE(0x3165, 0x4410)},
    {IWL_PCI_DEVICE(0x3165, 0x4510)},
    {IWL_PCI_DEVICE(0x3165, 0x4110)},
    {IWL_PCI_DEVICE(0x3166, 0x4310)},
    {IWL_PCI_DEVICE(0x3166, 0x4210)},
    {IWL_PCI_DEVICE(0x3165, 0x8010)},
    {IWL_PCI_DEVICE(0x3165, 0x8110)},
    
    /* 7265 Series */
    {IWL_PCI_DEVICE(0x095A, 0x5010)},
    {IWL_PCI_DEVICE(0x095A, 0x5110)},
    {IWL_PCI_DEVICE(0x095A, 0x5100)},
    {IWL_PCI_DEVICE(0x095B, 0x5310)},
    {IWL_PCI_DEVICE(0x095B, 0x5302)},
    {IWL_PCI_DEVICE(0x095B, 0x5210)},
    {IWL_PCI_DEVICE(0x095A, 0x5012)},
    {IWL_PCI_DEVICE(0x095A, 0x5412)},
    {IWL_PCI_DEVICE(0x095A, 0x5410)},
    {IWL_PCI_DEVICE(0x095A, 0x5510)},
    {IWL_PCI_DEVICE(0x095A, 0x5400)},
    {IWL_PCI_DEVICE(0x095A, 0x1010)},
    {IWL_PCI_DEVICE(0x095A, 0x5000)},
    {IWL_PCI_DEVICE(0x095A, 0x500A)},
    {IWL_PCI_DEVICE(0x095B, 0x5200)},
    {IWL_PCI_DEVICE(0x095A, 0x5002)},
    {IWL_PCI_DEVICE(0x095A, 0x5102)},
    {IWL_PCI_DEVICE(0x095B, 0x5202)},
    {IWL_PCI_DEVICE(0x095A, 0x9010)},
    {IWL_PCI_DEVICE(0x095A, 0x9012)},
    {IWL_PCI_DEVICE(0x095A, 0x900A)},
    {IWL_PCI_DEVICE(0x095A, 0x9110)},
    {IWL_PCI_DEVICE(0x095A, 0x9112)},
    {IWL_PCI_DEVICE(0x095A, 0x9210)},
    {IWL_PCI_DEVICE(0x095B, 0x9200)},
    {IWL_PCI_DEVICE(0x095A, 0x9510)},
    {IWL_PCI_DEVICE(0x095A, 0x9310)},
    {IWL_PCI_DEVICE(0x095A, 0x9410)},
    {IWL_PCI_DEVICE(0x095A, 0x5020)},
    {IWL_PCI_DEVICE(0x095A, 0x502A)},
    {IWL_PCI_DEVICE(0x095A, 0x5420)},
    {IWL_PCI_DEVICE(0x095A, 0x5090)},
    {IWL_PCI_DEVICE(0x095A, 0x5190)},
    {IWL_PCI_DEVICE(0x095A, 0x5590)},
    {IWL_PCI_DEVICE(0x095B, 0x5290)},
    {IWL_PCI_DEVICE(0x095A, 0x5490)},
    {IWL_PCI_DEVICE(0x095A, 0x5F10)},
    {IWL_PCI_DEVICE(0x095B, 0x5212)},
    {IWL_PCI_DEVICE(0x095B, 0x520A)},
    {IWL_PCI_DEVICE(0x095A, 0x9000)},
    {IWL_PCI_DEVICE(0x095A, 0x9400)},
    
    /* 8000 Series */
    {IWL_PCI_DEVICE(0x24F3, 0x0010)},
    {IWL_PCI_DEVICE(0x24F3, 0x1010)},
    {IWL_PCI_DEVICE(0x24F3, 0x0130)},
    {IWL_PCI_DEVICE(0x24F3, 0x1130)},
    {IWL_PCI_DEVICE(0x24F3, 0x0132)},
    {IWL_PCI_DEVICE(0x24F3, 0x1132)},
    {IWL_PCI_DEVICE(0x24F3, 0x0110)},
    {IWL_PCI_DEVICE(0x24F3, 0x01F0)},
    {IWL_PCI_DEVICE(0x24F3, 0x0012)},
    {IWL_PCI_DEVICE(0x24F3, 0x1012)},
    {IWL_PCI_DEVICE(0x24F3, 0x1110)},
    {IWL_PCI_DEVICE(0x24F3, 0x0050)},
    {IWL_PCI_DEVICE(0x24F3, 0x0250)},
    {IWL_PCI_DEVICE(0x24F3, 0x1050)},
    {IWL_PCI_DEVICE(0x24F3, 0x0150)},
    {IWL_PCI_DEVICE(0x24F3, 0x1150)},
    {IWL_PCI_DEVICE(0x24F4, 0x0030)},
    {IWL_PCI_DEVICE(0x24F4, 0x1030)},
    {IWL_PCI_DEVICE(0x24F3, 0xC010)},
    {IWL_PCI_DEVICE(0x24F3, 0xC110)},
    {IWL_PCI_DEVICE(0x24F3, 0xD010)},
    {IWL_PCI_DEVICE(0x24F3, 0xC050)},
    {IWL_PCI_DEVICE(0x24F3, 0xD050)},
    {IWL_PCI_DEVICE(0x24F3, 0x8010)},
    {IWL_PCI_DEVICE(0x24F3, 0x8110)},
    {IWL_PCI_DEVICE(0x24F3, 0x9010)},
    {IWL_PCI_DEVICE(0x24F3, 0x9110)},
    {IWL_PCI_DEVICE(0x24F4, 0x8030)},
    {IWL_PCI_DEVICE(0x24F4, 0x9030)},
    {IWL_PCI_DEVICE(0x24F3, 0x8130)},
    {IWL_PCI_DEVICE(0x24F3, 0x9130)},
    {IWL_PCI_DEVICE(0x24F3, 0x8132)},
    {IWL_PCI_DEVICE(0x24F3, 0x9132)},
    {IWL_PCI_DEVICE(0x24F3, 0x8050)},
    {IWL_PCI_DEVICE(0x24F3, 0x8150)},
    {IWL_PCI_DEVICE(0x24F3, 0x9050)},
    {IWL_PCI_DEVICE(0x24F3, 0x9150)},
    {IWL_PCI_DEVICE(0x24F3, 0x0004)},
    {IWL_PCI_DEVICE(0x24F3, 0x0044)},
    {IWL_PCI_DEVICE(0x24F5, 0x0010)},
    {IWL_PCI_DEVICE(0x24F6, 0x0030)},
    {IWL_PCI_DEVICE(0x24F3, 0x0810)},
    {IWL_PCI_DEVICE(0x24F3, 0x0910)},
    {IWL_PCI_DEVICE(0x24F3, 0x0850)},
    {IWL_PCI_DEVICE(0x24F3, 0x0950)},
    {IWL_PCI_DEVICE(0x24F3, 0x0930)}
};

#endif
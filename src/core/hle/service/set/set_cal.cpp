// Copyright 2018 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/set/set_cal.h"

namespace Service {
namespace Set {

SET_CAL::SET_CAL() : ServiceFramework("set:cal") {
    static const FunctionInfo functions[] = {
        {0, nullptr, "GetBluetoothBdAddress"},
        {1, nullptr, "GetConfigurationId1"},
        {2, nullptr, "GetAccelerometerOffset"},
        {3, nullptr, "GetAccelerometerScale"},
        {4, nullptr, "GetGyroscopeOffset"},
        {5, nullptr, "GetGyroscopeScale"},
        {6, nullptr, "GetWirelessLanMacAddress"},
        {7, nullptr, "GetWirelessLanCountryCodeCount"},
        {8, nullptr, "GetWirelessLanCountryCodes"},
        {9, nullptr, "GetSerialNumber"},
        {10, nullptr, "SetInitialSystemAppletProgramId"},
        {11, nullptr, "SetOverlayDispProgramId"},
        {12, nullptr, "GetBatteryLot"},
        {14, nullptr, "GetEciDeviceCertificate"},
        {15, nullptr, "GetEticketDeviceCertificate"},
        {16, nullptr, "GetSslKey"},
        {17, nullptr, "GetSslCertificate"},
        {18, nullptr, "GetGameCardKey"},
        {19, nullptr, "GetGameCardCertificate"},
        {20, nullptr, "GetEciDeviceKey"},
        {21, nullptr, "GetEticketDeviceKey"},
        {22, nullptr, "GetSpeakerParameter"},
        {23, nullptr, "GetLcdVendorId"},
    };
    RegisterHandlers(functions);
}

} // namespace Set
} // namespace Service
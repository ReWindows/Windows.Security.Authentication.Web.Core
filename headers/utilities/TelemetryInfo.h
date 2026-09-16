#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 2 member(s).
namespace Windows::Security::Authentication::Web::Core {
class TelemetryInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?JsonifyForActivityTelemetry@TelemetryInfo@Core@Web@Authentication@Security@Windows@@QEAAJPEAPEAUHSTRING__@@@Z
    long JsonifyForActivityTelemetry(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadFromJsonForActivityTelemetry@TelemetryInfo@Core@Web@Authentication@Security@Windows@@QEAAJPEBG@Z
    long ReadFromJsonForActivityTelemetry(unsigned short const *);
};
} // namespace Windows::Security::Authentication::Web::Core

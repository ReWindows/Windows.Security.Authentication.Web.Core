#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class WebProviderTokenRequestCheckApplicationForCapability {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebProviderTokenRequestCheckApplicationForCapability@WamClientLogProvider@@QEAAXPEAUHSTRING__@@@Z
    void StartActivity(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WebProviderTokenRequestCheckApplicationForCapability@WamClientLogProvider@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebProviderTokenRequestCheckApplicationForCapability@WamClientLogProvider@@QEAA@XZ
    ~WebProviderTokenRequestCheckApplicationForCapability();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebProviderTokenRequestCheckApplicationForCapability@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebProviderTokenRequestCheckApplicationForCapability@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

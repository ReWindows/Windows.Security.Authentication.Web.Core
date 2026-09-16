#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderClearPerUserFromPerAppAccount {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderClearPerUserFromPerAppAccount@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderClearPerUserFromPerAppAccount@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderClearPerUserFromPerAppAccount@WamClientLogProvider@@QEAA@XZ
    ~ProviderClearPerUserFromPerAppAccount();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderClearPerUserFromPerAppAccount@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderClearPerUserFromPerAppAccount@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

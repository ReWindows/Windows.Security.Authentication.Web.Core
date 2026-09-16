#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderGetPerUserFromPerAppAccount {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderGetPerUserFromPerAppAccount@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderGetPerUserFromPerAppAccount@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderGetPerUserFromPerAppAccount@WamClientLogProvider@@QEAA@XZ
    ~ProviderGetPerUserFromPerAppAccount();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderGetPerUserFromPerAppAccount@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderGetPerUserFromPerAppAccount@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

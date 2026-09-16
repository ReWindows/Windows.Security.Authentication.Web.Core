#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderSetPerAppToPerUserAccount {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderSetPerAppToPerUserAccount@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderSetPerAppToPerUserAccount@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderSetPerAppToPerUserAccount@WamClientLogProvider@@QEAA@XZ
    ~ProviderSetPerAppToPerUserAccount();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderSetPerAppToPerUserAccount@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderSetPerAppToPerUserAccount@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

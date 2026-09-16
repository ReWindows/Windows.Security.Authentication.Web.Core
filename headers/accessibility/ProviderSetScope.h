#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderSetScope {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderSetScope@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderSetScope@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderSetScope@WamClientLogProvider@@QEAA@XZ
    ~ProviderSetScope();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderSetScope@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderSetScope@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

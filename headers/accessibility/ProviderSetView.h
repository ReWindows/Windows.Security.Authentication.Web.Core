#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderSetView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderSetView@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderSetView@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderSetView@WamClientLogProvider@@QEAA@XZ
    ~ProviderSetView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderSetView@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderSetView@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

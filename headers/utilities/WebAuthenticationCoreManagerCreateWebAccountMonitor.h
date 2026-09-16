#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 4 member(s).
namespace WamClientLogProvider {
class WebAuthenticationCoreManagerCreateWebAccountMonitor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebAuthenticationCoreManagerCreateWebAccountMonitor@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebAuthenticationCoreManagerCreateWebAccountMonitor@WamClientLogProvider@@QEAA@XZ
    ~WebAuthenticationCoreManagerCreateWebAccountMonitor();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebAuthenticationCoreManagerCreateWebAccountMonitor@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebAuthenticationCoreManagerCreateWebAccountMonitor@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

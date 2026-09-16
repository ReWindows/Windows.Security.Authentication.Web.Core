#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 4 member(s).
namespace WamClientLogProvider {
class WebTokenRequestResultInvalidateCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebTokenRequestResultInvalidateCache@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebTokenRequestResultInvalidateCache@WamClientLogProvider@@QEAA@XZ
    ~WebTokenRequestResultInvalidateCache();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebTokenRequestResultInvalidateCache@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebTokenRequestResultInvalidateCache@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

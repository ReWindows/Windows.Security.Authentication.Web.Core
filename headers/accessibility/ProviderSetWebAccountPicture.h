#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderSetWebAccountPicture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderSetWebAccountPicture@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderSetWebAccountPicture@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderSetWebAccountPicture@WamClientLogProvider@@QEAA@XZ
    ~ProviderSetWebAccountPicture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderSetWebAccountPicture@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderSetWebAccountPicture@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

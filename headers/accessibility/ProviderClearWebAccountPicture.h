#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderClearWebAccountPicture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderClearWebAccountPicture@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderClearWebAccountPicture@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderClearWebAccountPicture@WamClientLogProvider@@QEAA@XZ
    ~ProviderClearWebAccountPicture();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderClearWebAccountPicture@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderClearWebAccountPicture@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

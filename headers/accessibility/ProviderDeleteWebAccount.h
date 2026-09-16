#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderDeleteWebAccount {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderDeleteWebAccount@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderDeleteWebAccount@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderDeleteWebAccount@WamClientLogProvider@@QEAA@XZ
    ~ProviderDeleteWebAccount();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderDeleteWebAccount@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderDeleteWebAccount@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class ProviderUpdateWebAccountProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderUpdateWebAccountProperties@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderUpdateWebAccountProperties@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderUpdateWebAccountProperties@WamClientLogProvider@@QEAA@XZ
    ~ProviderUpdateWebAccountProperties();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderUpdateWebAccountProperties@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderUpdateWebAccountProperties@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

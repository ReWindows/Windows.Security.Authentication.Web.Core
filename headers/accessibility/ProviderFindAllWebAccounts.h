#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace WamClientLogProvider {
class ProviderFindAllWebAccounts {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Provider@ProviderFindAllWebAccounts@WamClientLogProvider@@QEAAXPEAUHSTRING__@@0_N@Z
    void Provider(HSTRING__*, HSTRING__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProviderFindAllWebAccounts@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ProviderFindAllWebAccounts@WamClientLogProvider@@QEAAXPEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z
    void Stop(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProviderFindAllWebAccounts@WamClientLogProvider@@QEAA@XZ
    ~ProviderFindAllWebAccounts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProviderFindAllWebAccounts@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProviderFindAllWebAccounts@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

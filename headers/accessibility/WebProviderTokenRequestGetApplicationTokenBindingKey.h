#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class WebProviderTokenRequestGetApplicationTokenBindingKey {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebProviderTokenRequestGetApplicationTokenBindingKey@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WebProviderTokenRequestGetApplicationTokenBindingKey@WamClientLogProvider@@QEAAXPEBVCGetApplicationTokenBindingKeyOperation@Web@Authentication@Security@Internal@Windows@@PEAUICryptographicKey@Core@Cryptography@68@@Z
    void Stop(WindissectOpaque const *, ::Windows::Security::Cryptography::Core::ICryptographicKey *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebProviderTokenRequestGetApplicationTokenBindingKey@WamClientLogProvider@@QEAA@XZ
    ~WebProviderTokenRequestGetApplicationTokenBindingKey();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebProviderTokenRequestGetApplicationTokenBindingKey@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebProviderTokenRequestGetApplicationTokenBindingKey@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

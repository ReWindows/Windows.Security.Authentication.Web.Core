#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace WamClientLogProvider {
class WebProviderTokenRequestGetApplicationTokenBindingKeyId {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebProviderTokenRequestGetApplicationTokenBindingKeyId@WamClientLogProvider@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WebProviderTokenRequestGetApplicationTokenBindingKeyId@WamClientLogProvider@@QEAAXPEBVCGetApplicationTokenBindingKeyIdOperation@Web@Authentication@Security@Internal@Windows@@PEAUIBuffer@Streams@Storage@8@@Z
    void Stop(WindissectOpaque const *, ::Windows::Storage::Streams::IBuffer *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebProviderTokenRequestGetApplicationTokenBindingKeyId@WamClientLogProvider@@QEAA@XZ
    ~WebProviderTokenRequestGetApplicationTokenBindingKeyId();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebProviderTokenRequestGetApplicationTokenBindingKeyId@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebProviderTokenRequestGetApplicationTokenBindingKeyId@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

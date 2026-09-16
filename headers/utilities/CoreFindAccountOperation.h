#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace WamClientLogProvider {
class CoreFindAccountOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreFindAccountOperation@WamClientLogProvider@@QEAAXPEAUIUnknown@@PEBD@Z
    void StartActivity(IUnknown *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CoreFindAccountOperation@WamClientLogProvider@@QEAAXPEBVCCoreFindAccountOperation@Core@Web@Authentication@Security@Windows@@PEAUIWebAccount@Credentials@78@@Z
    void Stop(::Windows::Security::Authentication::Web::Core::CCoreFindAccountOperation const *, ::Windows::Security::Credentials::IWebAccount *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceParams@CoreFindAccountOperation@WamClientLogProvider@@QEAAXAEBUCoreFindAccountParams@Core@Web@Authentication@Security@Windows@@@Z
    void TraceParams(::Windows::Security::Authentication::Web::Core::CoreFindAccountParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreFindAccountOperation@WamClientLogProvider@@QEAA@XZ
    ~CoreFindAccountOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreFindAccountOperation@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreFindAccountOperation@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 7 member(s).
namespace WamClientLogProvider {
class CoreFindAccountProviderOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallerIsSystemOrService@CoreFindAccountProviderOperation@WamClientLogProvider@@QEAAXXZ
    void CallerIsSystemOrService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreFindAccountProviderOperation@WamClientLogProvider@@QEAAXPEAUIUnknown@@PEBD@Z
    void StartActivity(IUnknown *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CoreFindAccountProviderOperation@WamClientLogProvider@@QEAAXPEBVCCoreFindAccountProviderOperation@Core@Web@Authentication@Security@Windows@@PEAUIWebAccountProvider@Credentials@78@@Z
    void Stop(::Windows::Security::Authentication::Web::Core::CCoreFindAccountProviderOperation const *, ::Windows::Security::Credentials::IWebAccountProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceParams@CoreFindAccountProviderOperation@WamClientLogProvider@@QEAAXAEBUCoreFindAccountProviderParams@Core@Web@Authentication@Security@Windows@@@Z
    void TraceParams(::Windows::Security::Authentication::Web::Core::CoreFindAccountProviderParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreFindAccountProviderOperation@WamClientLogProvider@@QEAA@XZ
    ~CoreFindAccountProviderOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreFindAccountProviderOperation@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreFindAccountProviderOperation@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

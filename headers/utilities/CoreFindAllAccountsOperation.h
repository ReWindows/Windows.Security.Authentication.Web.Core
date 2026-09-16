#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace WamClientLogProvider {
class CoreFindAllAccountsOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreFindAllAccountsOperation@WamClientLogProvider@@QEAAXPEAUIUnknown@@PEBD@Z
    void StartActivity(IUnknown *, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CoreFindAllAccountsOperation@WamClientLogProvider@@QEAAXPEBVCCoreFindAllAccountsOperation@Core@Web@Authentication@Security@Windows@@PEAUIFindAllAccountsResult@45678@@Z
    void Stop(::Windows::Security::Authentication::Web::Core::CCoreFindAllAccountsOperation const *, ::Windows::Security::Authentication::Web::Core::IFindAllAccountsResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceParams@CoreFindAllAccountsOperation@WamClientLogProvider@@QEAAXAEBUCoreFindAllAccountsParams@Core@Web@Authentication@Security@Windows@@@Z
    void TraceParams(::Windows::Security::Authentication::Web::Core::CoreFindAllAccountsParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreFindAllAccountsOperation@WamClientLogProvider@@QEAA@XZ
    ~CoreFindAllAccountsOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreFindAllAccountsOperation@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreFindAllAccountsOperation@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

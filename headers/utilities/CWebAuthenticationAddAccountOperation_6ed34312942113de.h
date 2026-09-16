#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace WamClientLogProvider {
class CWebAuthenticationAddAccountOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CWebAuthenticationAddAccountOperation@WamClientLogProvider@@QEAAXPEAUIUnknown@@AEAUAddAccountWithTransferTokenParams@Core@Web@Authentication@Security@Windows@@@Z
    void StartActivity(IUnknown *, ::Windows::Security::Authentication::Web::Core::AddAccountWithTransferTokenParams &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CWebAuthenticationAddAccountOperation@WamClientLogProvider@@QEAAXPEBV1Core@Web@Authentication@Security@Windows@@PEAUIWebAuthenticationAddAccountResult@34567@@Z
    void Stop(::Windows::Security::Authentication::Web::Core::CWebAuthenticationAddAccountOperation const *, ::Windows::Security::Authentication::Web::Core::IWebAuthenticationAddAccountResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceParams@CWebAuthenticationAddAccountOperation@WamClientLogProvider@@QEAAXAEAUAddAccountWithTransferTokenParams@Core@Web@Authentication@Security@Windows@@@Z
    void TraceParams(::Windows::Security::Authentication::Web::Core::AddAccountWithTransferTokenParams &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAuthenticationAddAccountOperation@WamClientLogProvider@@QEAA@XZ
    ~CWebAuthenticationAddAccountOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CWebAuthenticationAddAccountOperation@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CWebAuthenticationAddAccountOperation@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

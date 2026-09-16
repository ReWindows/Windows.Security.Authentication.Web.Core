#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 9 member(s).
namespace WamClientLogProvider {
class WebTokenRequestResultOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WebTokenRequestResultOperation@WamClientLogProvider@@QEAAXPEAUIUnknown@@AEAUWebTokenRequsetResultOperationParams@Core@Web@Authentication@Security@Windows@@@Z
    void StartActivity(IUnknown *, ::Windows::Security::Authentication::Web::Core::WebTokenRequsetResultOperationParams &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WebTokenRequestResultOperation@WamClientLogProvider@@QEAAXPEBVCWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@PEAUIWebTokenRequestResult@45678@@Z
    void Stop(::Windows::Security::Authentication::Web::Core::CWebTokenRequestResultOperation const *, ::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceParams@WebTokenRequestResultOperation@WamClientLogProvider@@QEAAXAEAUWebTokenRequsetResultOperationParams@Core@Web@Authentication@Security@Windows@@@Z
    void TraceParams(::Windows::Security::Authentication::Web::Core::WebTokenRequsetResultOperationParams &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebTokenRequestResultOperation@WamClientLogProvider@@QEAA@$$QEAV01@@Z
    WebTokenRequestResultOperation(WindissectOpaque &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WebTokenRequestResultOperation@WamClientLogProvider@@QEAA@XZ
    ~WebTokenRequestResultOperation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WebTokenRequestResultOperation@WamClientLogProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WebTokenRequestResultOperation@WamClientLogProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WamClientLogProvider

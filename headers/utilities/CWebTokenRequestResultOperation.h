#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 25 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebTokenRequestResultOperation {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebTokenRequestResultOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOperationData@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@UEAAJPEAUWebTokenRequsetResultOperationParams@23456@@Z
    virtual long InitializeOperationData(::Windows::Security::Authentication::Web::Core::WebTokenRequsetResultOperationParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@UEAAXXZ
    virtual void OnCancel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebTokenRequestResultOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAccountSwitchStatus@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long ApplyAccountSwitchStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyConnectedAccountLogic@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long ApplyConnectedAccountLogic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplySystemProviderRestrictions@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long ApplySystemProviderRestrictions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoClientHeavyWork@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long DoClientHeavyWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoServerHeavyWork@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long DoServerHeavyWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTokenBrokerInternal@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long InitializeTokenBrokerInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAccountHintsPresent@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAA_NXZ
    bool IsAccountHintsPresent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchComponentUI@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJPEAUIInspectable@@@Z
    long LaunchComponentUI(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordResultAndCallerIdentity@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJJ_K@Z
    long RecordResultAndCallerIdentity(long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCache@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAXXZ
    void TryCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryExtension@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAXW4ExtensionType@TokenBroker@45Internal@6@@Z
    void TryExtension(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySilent@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAXXZ
    void TrySilent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySilentRetryWithDefaultAccount@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long TrySilentRetryWithDefaultAccount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUi@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAXXZ
    void TryUi();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAppWindowToRoot@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAXXZ
    void UpdateAppWindowToRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRequestWithAccountControlWebAccount@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long UpdateRequestWithAccountControlWebAccount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateProviderAndAccountsMatch@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long ValidateProviderAndAccountsMatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteTokenResponseCache@CWebTokenRequestResultOperation@Core@Web@Authentication@Security@Windows@@AEAAJAEA_N@Z
    long WriteTokenResponseCache(bool &);
};
} // namespace Windows::Security::Authentication::Web::Core

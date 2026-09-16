#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 76 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebAuthenticationCoreManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAccountWithTransferTokenAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAuthenticationTransferTokenRequest@23456@PEAPEAU?$IAsyncOperation@PEAVWebAuthenticationAddAccountResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long AddAccountWithTransferTokenAsync(::Windows::Security::Authentication::Web::Core::IWebAuthenticationTransferTokenRequest *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAuthenticationCoreManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWebAccountMonitor@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAU?$IIterable@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@PEAPEAUIWebAccountMonitor@23456@@Z
    virtual long CreateWebAccountMonitor(WindissectOpaque *, ::Windows::Security::Authentication::Web::Core::IWebAccountMonitor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAccountAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVWebAccount@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long FindAccountAsync(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAccountProviderAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long FindAccountProviderAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAccountProviderWithAuthorityAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long FindAccountProviderWithAuthorityAsync(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAccountProviderWithAuthorityForUserAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAUIUser@System@6@PEAPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long FindAccountProviderWithAuthorityForUserAsync(HSTRING__*, HSTRING__*, ::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAccountsAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAPEAU?$IAsyncOperation@PEAVFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long FindAllAccountsAsync(::Windows::Security::Credentials::IWebAccountProvider *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAllAccountsWithClientIdAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVFindAllAccountsResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long FindAllAccountsWithClientIdAsync(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSystemAccountProviderAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long FindSystemAccountProviderAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSystemAccountProviderWithAuthorityAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long FindSystemAccountProviderWithAuthorityAsync(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSystemAccountProviderWithAuthorityForUserAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@0PEAUIUser@System@6@PEAPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@6@@Z
    virtual long FindSystemAccountProviderWithAuthorityForUserAsync(HSTRING__*, HSTRING__*, ::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenSilentlyAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebTokenRequest@23456@PEAPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long GetTokenSilentlyAsync(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTokenSilentlyWithWebAccountAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebTokenRequest@23456@PEAUIWebAccount@Credentials@56@PEAPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long GetTokenSilentlyWithWebAccountAsync(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, ::Windows::Security::Credentials::IWebAccount *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTokenAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebTokenRequest@23456@PEAPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long RequestTokenAsync(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTokenForWindowAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHWND__@@PEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z
    virtual long RequestTokenForWindowAsync(HWND__*, IInspectable *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTokenWithUIElementHostingAndWebAccountAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebTokenRequest@23456@PEAUIWebAccount@Credentials@56@PEAUIInspectable@@PEAPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long RequestTokenWithUIElementHostingAndWebAccountAsync(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, ::Windows::Security::Credentials::IWebAccount *, IInspectable *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTokenWithUIElementHostingAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebTokenRequest@23456@PEAUIInspectable@@PEAPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long RequestTokenWithUIElementHostingAsync(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, IInspectable *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTokenWithWebAccountAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebTokenRequest@23456@PEAUIWebAccount@Credentials@56@PEAPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@6@@Z
    virtual long RequestTokenWithWebAccountAsync(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, ::Windows::Security::Credentials::IWebAccount *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestTokenWithWebAccountForWindowAsync@CWebAuthenticationCoreManager@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHWND__@@PEAUIInspectable@@1AEBU_GUID@@PEAPEAX@Z
    virtual long RequestTokenWithWebAccountForWindowAsync(HWND__*, IInspectable *, IInspectable *, _GUID const &, void * *);
};
} // namespace Windows::Security::Authentication::Web::Core

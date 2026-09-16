#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 7 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class SystemExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAccountWithTransferToken@SystemExtension@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAUIWebAuthenticationTransferTokenRequest@Core@Web@346@PEAUIUser@System@6@PEAW4SystemExtensionResult@93456@PEAPEAUIWebAuthenticationAddAccountResult@89346@@Z
    long AddAccountWithTransferToken(::Windows::Security::Authentication::Web::Core::IWebAuthenticationTransferTokenRequest *, ::Windows::System::IUser *, int *, ::Windows::Security::Authentication::Web::Core::IWebAuthenticationAddAccountResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndExecuteExtensionRequest@SystemExtension@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUIWebTokenRequest@Core@Web@346@PEAU?$IVector@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@6@PEAUIUser@System@6@_NW4ExtensionType@23456@AEAVString@56@PEAW4SystemExtensionResult@93456@PEAPEAUIWebTokenRequestResult@89346@@Z
    static long CheckAndExecuteExtensionRequest(::Windows::Security::Authentication::Web::Core::IWebTokenRequest *, WindissectOpaque *, ::Windows::System::IUser *, bool, int, ::Windows::Internal::String &, int *, ::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionType@SystemExtension@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEAUHSTRING__@@AEAW4ExtensionType@23456@@Z
    static long GetExtensionType(HSTRING__*, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtensionsEnabled@SystemExtension@TokenBroker@Authentication@Security@Internal@Windows@@SA_NXZ
    static bool IsExtensionsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExtensionsEnabledFor3rdPartyProviders@SystemExtension@TokenBroker@Authentication@Security@Internal@Windows@@SA_NXZ
    static bool IsExtensionsEnabledFor3rdPartyProviders();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SystemExtension@TokenBroker@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~SystemExtension();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SystemExtension@TokenBroker@Authentication@Security@Internal@Windows@@AEAAJPEAUHSTRING__@@@Z
    long Initialize(HSTRING__*);
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker

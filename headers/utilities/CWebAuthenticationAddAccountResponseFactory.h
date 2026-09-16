#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebAuthenticationAddAccountResponseFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CWebAuthenticationAddAccountResponseFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAuthenticationAddAccountResponseFactory@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAuthenticationAddAccountResponseFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithAccount@CWebAuthenticationAddAccountResponseFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccount@Credentials@56@PEAPEAUIWebAuthenticationAddAccountResponse@23456@@Z
    virtual long CreateWithAccount(::Windows::Security::Credentials::IWebAccount *, ::Windows::Security::Authentication::Web::Core::IWebAuthenticationAddAccountResponse * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@CWebAuthenticationAddAccountResponseFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
};
} // namespace Windows::Security::Authentication::Web::Core

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebAuthenticationTransferTokenRequestFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAuthenticationTransferTokenRequestFactory@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebAuthenticationTransferTokenRequestFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWebAuthenticationTransferTokenRequestFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAUHSTRING__@@PEAPEAUIWebAuthenticationTransferTokenRequest@23456@@Z
    virtual long Create(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, ::Windows::Security::Authentication::Web::Core::IWebAuthenticationTransferTokenRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithCorrelationId@CWebAuthenticationTransferTokenRequestFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAUHSTRING__@@1PEAPEAUIWebAuthenticationTransferTokenRequest@23456@@Z
    virtual long CreateWithCorrelationId(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, HSTRING__*, ::Windows::Security::Authentication::Web::Core::IWebAuthenticationTransferTokenRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@CWebAuthenticationTransferTokenRequestFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
};
} // namespace Windows::Security::Authentication::Web::Core

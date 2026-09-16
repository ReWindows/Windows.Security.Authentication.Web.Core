#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 8 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebTokenRequestFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebTokenRequestFactory@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebTokenRequestFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWebTokenRequestFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAUHSTRING__@@1PEAPEAUIWebTokenRequest@23456@@Z
    virtual long Create(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, HSTRING__*, ::Windows::Security::Authentication::Web::Core::IWebTokenRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithPromptType@CWebTokenRequestFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAUHSTRING__@@1W4WebTokenRequestPromptType@23456@PEAPEAUIWebTokenRequest@23456@@Z
    virtual long CreateWithPromptType(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, HSTRING__*, int, ::Windows::Security::Authentication::Web::Core::IWebTokenRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithProvider@CWebTokenRequestFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAPEAUIWebTokenRequest@23456@@Z
    virtual long CreateWithProvider(::Windows::Security::Credentials::IWebAccountProvider *, ::Windows::Security::Authentication::Web::Core::IWebTokenRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithScope@CWebTokenRequestFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIWebAccountProvider@Credentials@56@PEAUHSTRING__@@PEAPEAUIWebTokenRequest@23456@@Z
    virtual long CreateWithScope(::Windows::Security::Credentials::IWebAccountProvider *, HSTRING__*, ::Windows::Security::Authentication::Web::Core::IWebTokenRequest * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@CWebTokenRequestFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
};
} // namespace Windows::Security::Authentication::Web::Core

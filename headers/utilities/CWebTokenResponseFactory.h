#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 8 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebTokenResponseFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CWebTokenResponseFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebTokenResponseFactory@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebTokenResponseFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithToken@CWebTokenResponseFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIWebTokenResponse@23456@@Z
    virtual long CreateWithToken(HSTRING__*, ::Windows::Security::Authentication::Web::Core::IWebTokenResponse * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithTokenAccountAndError@CWebTokenResponseFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@PEAUIWebAccount@Credentials@56@PEAUIWebProviderError@23456@PEAPEAUIWebTokenResponse@23456@@Z
    virtual long CreateWithTokenAccountAndError(HSTRING__*, ::Windows::Security::Credentials::IWebAccount *, ::Windows::Security::Authentication::Web::Core::IWebProviderError *, ::Windows::Security::Authentication::Web::Core::IWebTokenResponse * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithTokenAndAccount@CWebTokenResponseFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUHSTRING__@@PEAUIWebAccount@Credentials@56@PEAPEAUIWebTokenResponse@23456@@Z
    virtual long CreateWithTokenAndAccount(HSTRING__*, ::Windows::Security::Credentials::IWebAccount *, ::Windows::Security::Authentication::Web::Core::IWebTokenResponse * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@CWebTokenResponseFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
};
} // namespace Windows::Security::Authentication::Web::Core

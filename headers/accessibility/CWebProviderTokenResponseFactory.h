#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 3 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebProviderTokenResponseFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWebProviderTokenResponseFactory@Provider@Web@Authentication@Security@Windows@@UEAAJPEAUIWebTokenResponse@Core@3456@PEAPEAUIWebProviderTokenResponse@23456@@Z
    virtual long Create(::Windows::Security::Authentication::Web::Core::IWebTokenResponse *, WindissectOpaque * *);
};
} // namespace Windows::Security::Authentication::Web::Provider

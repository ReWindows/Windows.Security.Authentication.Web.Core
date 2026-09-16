#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 4 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountClientViewFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWebAccountClientViewFactory@Provider@Web@Authentication@Security@Windows@@UEAAJW4WebAccountClientViewType@23456@PEAUIUriRuntimeClass@Foundation@6@PEAPEAUIWebAccountClientView@23456@@Z
    virtual long Create(int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithPairwiseId@CWebAccountClientViewFactory@Provider@Web@Authentication@Security@Windows@@UEAAJW4WebAccountClientViewType@23456@PEAUIUriRuntimeClass@Foundation@6@PEAUHSTRING__@@PEAPEAUIWebAccountClientView@23456@@Z
    virtual long CreateWithPairwiseId(int, WindissectOpaque *, HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Security::Authentication::Web::Provider

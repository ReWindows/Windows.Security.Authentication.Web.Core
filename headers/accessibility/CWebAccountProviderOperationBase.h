#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderOperationBase {
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebAccountProviderOperationBase@Provider@Web@Authentication@Security@Windows@@IEAA@XZ
    CWebAccountProviderOperationBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWebAccountProviderOperationBase@Provider@Web@Authentication@Security@Windows@@IEAAJW4WebAccountProviderOperationKind@23456@@Z
    long Initialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@CWebAccountProviderOperationBase@Provider@Web@Authentication@Security@Windows@@MEAAJPEAW4WebAccountProviderOperationKind@23456@@Z
    virtual long get_Kind(int *);
};
} // namespace Windows::Security::Authentication::Web::Provider

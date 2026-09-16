#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Internal::Security::Authentication::Web {
class CGetApplicationTokenBindingKeyIdOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CGetApplicationTokenBindingKeyIdOperation@Web@Authentication@Security@Internal@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOperationData@CGetApplicationTokenBindingKeyIdOperation@Web@Authentication@Security@Internal@Windows@@UEAAJPEAUGetApplicationTokenBindingKeyParams@23456@@Z
    virtual long InitializeOperationData(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGetApplicationTokenBindingKeyIdOperation@Web@Authentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~CGetApplicationTokenBindingKeyIdOperation();
};
} // namespace Windows::Internal::Security::Authentication::Web

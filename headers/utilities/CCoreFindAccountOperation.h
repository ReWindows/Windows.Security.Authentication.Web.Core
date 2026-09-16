#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CCoreFindAccountOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CCoreFindAccountOperation@Core@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOperationData@CCoreFindAccountOperation@Core@Web@Authentication@Security@Windows@@UEAAJPEAUCoreFindAccountParams@23456@@Z
    virtual long InitializeOperationData(::Windows::Security::Authentication::Web::Core::CoreFindAccountParams *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCoreFindAccountOperation@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CCoreFindAccountOperation();
};
} // namespace Windows::Security::Authentication::Web::Core

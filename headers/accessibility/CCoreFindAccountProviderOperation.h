#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CCoreFindAccountProviderOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CCoreFindAccountProviderOperation@Core@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOperationData@CCoreFindAccountProviderOperation@Core@Web@Authentication@Security@Windows@@UEAAJPEAUCoreFindAccountProviderParams@23456@@Z
    virtual long InitializeOperationData(::Windows::Security::Authentication::Web::Core::CoreFindAccountProviderParams *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCoreFindAccountProviderOperation@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CCoreFindAccountProviderOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoWorkImpl@CCoreFindAccountProviderOperation@Core@Web@Authentication@Security@Windows@@AEAAJXZ
    long _DoWorkImpl();
};
} // namespace Windows::Security::Authentication::Web::Core

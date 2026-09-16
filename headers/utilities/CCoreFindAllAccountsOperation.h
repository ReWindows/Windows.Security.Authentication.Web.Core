#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CCoreFindAllAccountsOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CCoreFindAllAccountsOperation@Core@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOperationData@CCoreFindAllAccountsOperation@Core@Web@Authentication@Security@Windows@@UEAAJPEAUCoreFindAllAccountsParams@23456@@Z
    virtual long InitializeOperationData(::Windows::Security::Authentication::Web::Core::CoreFindAllAccountsParams *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCoreFindAllAccountsOperation@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CCoreFindAllAccountsOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFindAllAccountsResult@CCoreFindAllAccountsOperation@Core@Web@Authentication@Security@Windows@@AEAAJPEAUIWebTokenRequestResult@23456@@Z
    long CreateFindAllAccountsResult(::Windows::Security::Authentication::Web::Core::IWebTokenRequestResult *);
};
} // namespace Windows::Security::Authentication::Web::Core

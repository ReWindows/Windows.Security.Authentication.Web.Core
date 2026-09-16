#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebAuthenticationAddAccountOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CWebAuthenticationAddAccountOperation@Core@Web@Authentication@Security@Windows@@UEAAJXZ
    virtual long DoWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOperationData@CWebAuthenticationAddAccountOperation@Core@Web@Authentication@Security@Windows@@UEAAJPEAUAddAccountWithTransferTokenParams@23456@@Z
    virtual long InitializeOperationData(::Windows::Security::Authentication::Web::Core::AddAccountWithTransferTokenParams *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@CWebAuthenticationAddAccountOperation@Core@Web@Authentication@Security@Windows@@UEAAXXZ
    virtual void OnCancel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAuthenticationAddAccountOperation@Core@Web@Authentication@Security@Windows@@UEAA@XZ
    virtual ~CWebAuthenticationAddAccountOperation();
};
} // namespace Windows::Security::Authentication::Web::Core

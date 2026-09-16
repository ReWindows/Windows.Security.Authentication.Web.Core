#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web::Core {
class WebAuthenticationAddAccountResultFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WebAuthenticationAddAccountResultFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@WebAuthenticationAddAccountResultFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebAuthenticationAddAccountResultFactory@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    WebAuthenticationAddAccountResultFactory();
};
} // namespace Windows::Security::Authentication::Web::Core

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web::Core {
class FindAllAccountsResultFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@FindAllAccountsResultFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FindAllAccountsResultFactory@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    FindAllAccountsResultFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@FindAllAccountsResultFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
};
} // namespace Windows::Security::Authentication::Web::Core

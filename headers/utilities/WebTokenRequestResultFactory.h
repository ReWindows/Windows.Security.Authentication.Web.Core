#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web::Core {
class WebTokenRequestResultFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@WebTokenRequestResultFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@WebTokenRequestResultFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WebTokenRequestResultFactory@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    WebTokenRequestResultFactory();
};
} // namespace Windows::Security::Authentication::Web::Core

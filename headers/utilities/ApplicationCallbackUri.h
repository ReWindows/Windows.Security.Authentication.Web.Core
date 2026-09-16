#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 11 member(s).
namespace Windows::Internal::Security::Authentication::Web {
class ApplicationCallbackUri {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediumCallerStringSid@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@SAJPEAPEAUHSTRING__@@@Z
    static long GetMediumCallerStringSid(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediumCallerUri@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@SAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    static long GetMediumCallerUri(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringSid@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@QEBAJPEAPEAUHSTRING__@@@Z
    long GetStringSid(HSTRING__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringUri@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@QEBAJPEAPEAUHSTRING__@@@Z
    long GetStringUri(HSTRING__* *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUri@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@QEBAJPEAPEAUIUriRuntimeClass@Foundation@6@@Z
    long GetUri(WindissectOpaque * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromPfn@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@@Z
    long InitializeFromPfn(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromUri@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@QEAAJPEAUIUriRuntimeClass@Foundation@6@@Z
    long InitializeFromUri(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizePFN@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@SAJQEAUHSTRING__@@PEAPEAU7@@Z
    static long NormalizePFN(HSTRING__* const, HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~ApplicationCallbackUri();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildStringUri@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@CAJPEAUHSTRING__@@PEAPEAU7@@Z
    static long BuildStringUri(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildUri@ApplicationCallbackUri@Web@Authentication@Security@Internal@Windows@@CAJPEAUHSTRING__@@PEAPEAUIUriRuntimeClass@Foundation@6@@Z
    static long BuildUri(HSTRING__*, WindissectOpaque * *);
};
} // namespace Windows::Internal::Security::Authentication::Web

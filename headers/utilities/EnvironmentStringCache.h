#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 3 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class EnvironmentStringCache {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpandedEnvironmentStringForUser@EnvironmentStringCache@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAXPEBGPEAGK@Z
    long GetExpandedEnvironmentStringForUser(void *, unsigned short const *, unsigned short *, unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntry@EnvironmentStringCache@TokenBroker@Authentication@Security@Internal@Windows@@AEAAJPEBGPEAG@Z
    long AddEntry(unsigned short const *, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandEnvStringForUser@EnvironmentStringCache@TokenBroker@Authentication@Security@Internal@Windows@@AEAAJPEBG0PEAGK@Z
    long ExpandEnvStringForUser(unsigned short const *, unsigned short const *, unsigned short *, unsigned long);
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker

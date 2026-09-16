#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class JsonObjectReader {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppsWithProperties@JsonObjectReader@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@6@@Z
    long GetAppsWithProperties(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerAppProperty@JsonObjectReader@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@0AEAVJsonObjectProperty@23456@@Z
    long GetPerAppProperty(HSTRING__*, HSTRING__*, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemDefinedProperty@JsonObjectReader@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@AEAVJsonObjectProperty@23456@@Z
    long GetSystemDefinedProperty(HSTRING__*, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromString@JsonObjectReader@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEBG@Z
    long InitializeFromString(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JsonObjectReader@TokenBroker@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~JsonObjectReader();
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker

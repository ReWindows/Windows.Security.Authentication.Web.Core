#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 6 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class JsonObjectWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPerAppProperty@JsonObjectWriter@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@AEBVJsonObjectProperty@23456@@Z
    long AddPerAppProperty(HSTRING__*, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProviderDefinedProperty@JsonObjectWriter@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJAEBVJsonObjectProperty@23456@@Z
    long AddProviderDefinedProperty(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSystemDefinedProperty@JsonObjectWriter@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJAEBVJsonObjectProperty@23456@@Z
    long AddSystemDefinedProperty(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateJsonString@JsonObjectWriter@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJAEAVString@56@@Z
    long GenerateJsonString(::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@JsonObjectWriter@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJW4SerializedObjectType@23456@@Z
    long Initialize(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JsonObjectWriter@TokenBroker@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~JsonObjectWriter();
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker

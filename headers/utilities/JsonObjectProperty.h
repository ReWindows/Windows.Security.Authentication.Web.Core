#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 13 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class JsonObjectProperty {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMultiStringValue@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@@Z
    long AddMultiStringValue(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBooleanValue@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEBAJAEA_N@Z
    long GetBooleanValue(bool &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInlineBytesValue@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEBAJPEAPEAEPEAK@Z
    long GetInlineBytesValue(unsigned char * *, unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyName@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEBAJAEAVString@56@@Z
    long GetPropertyName(::Windows::Internal::String &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSingleStringValue@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEBAJAEAVString@56@@Z
    long GetSingleStringValue(::Windows::Internal::String &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAUIJsonObject@Json@Data@6@PEAUHSTRING__@@@Z
    long Initialize(::Windows::Data::Json::IJsonObject *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJW4SerializedPropertyType@23456@PEAUHSTRING__@@_N2@Z
    long Initialize(int, HSTRING__*, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBooleanValue@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJ_N@Z
    long SetBooleanValue(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInlineBytesValue@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAEK@Z
    long SetInlineBytesValue(unsigned char *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSingleStringValue@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@@Z
    long SetSingleStringValue(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@QEAA@XZ
    ~JsonObjectProperty();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertTypeToStringType@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@CAPEBGW4SerializedPropertyType@23456@@Z
    static unsigned short const * ConvertTypeToStringType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePropertyData@JsonObjectProperty@TokenBroker@Authentication@Security@Internal@Windows@@CAJPEAUIJsonObject@Json@Data@6@AEAW4SerializedPropertyType@23456@AEA_N@Z
    static long InitializePropertyData(::Windows::Data::Json::IJsonObject *, int &, bool &);
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker

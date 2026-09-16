#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 2 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class JsonObjectHeader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertStringTypeToType@JsonObjectHeader@TokenBroker@Authentication@Security@Internal@Windows@@SA?AW4SerializedObjectType@23456@AEBVString@56@@Z
    static int ConvertStringTypeToType(::Windows::Internal::String const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@JsonObjectHeader@TokenBroker@Authentication@Security@Internal@Windows@@QEAAJPEAUIJsonObject@Json@Data@6@@Z
    long Initialize(::Windows::Data::Json::IJsonObject *);
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker

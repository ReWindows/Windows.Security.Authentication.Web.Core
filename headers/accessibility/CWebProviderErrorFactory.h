#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 5 member(s).
namespace Windows::Security::Authentication::Web::Core {
class CWebProviderErrorFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWebProviderErrorFactory@Core@Web@Authentication@Security@Windows@@QEAA@XZ
    CWebProviderErrorFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWebProviderErrorFactory@Core@Web@Authentication@Security@Windows@@UEAAJKPEAUHSTRING__@@PEAPEAUIWebProviderError@23456@@Z
    virtual long Create(unsigned long, HSTRING__*, ::Windows::Security::Authentication::Web::Core::IWebProviderError * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalObjectFromPropertySet@CWebProviderErrorFactory@Core@Web@Authentication@Security@Windows@@UEAAJPEAUIPropertySet@Collections@Foundation@6@PEAPEAUIInspectable@@@Z
    virtual long UnmarshalObjectFromPropertySet(WindissectOpaque *, IInspectable * *);
};
} // namespace Windows::Security::Authentication::Web::Core

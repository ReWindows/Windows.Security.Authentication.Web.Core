#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 8 member(s).
namespace Windows::Security::Authentication::Web::Provider {
class CWebAccountProviderRequestTokenBase {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWebAccountProviderRequestTokenBase@Provider@Web@Authentication@Security@Windows@@IEAAJPEAUIWebProviderTokenRequest@23456@@Z
    long Initialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CacheExpirationTime@CWebAccountProviderRequestTokenBase@Provider@Web@Authentication@Security@Windows@@MEAAJPEAUDateTime@Foundation@6@@Z
    virtual long get_CacheExpirationTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderRequest@CWebAccountProviderRequestTokenBase@Provider@Web@Authentication@Security@Windows@@MEAAJPEAPEAUIWebProviderTokenRequest@23456@@Z
    virtual long get_ProviderRequest(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProviderResponses@CWebAccountProviderRequestTokenBase@Provider@Web@Authentication@Security@Windows@@MEAAJPEAPEAU?$IVector@PEAVWebProviderTokenResponse@Provider@Web@Authentication@Security@Windows@@@Collections@Foundation@6@@Z
    virtual long get_ProviderResponses(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CacheExpirationTime@CWebAccountProviderRequestTokenBase@Provider@Web@Authentication@Security@Windows@@MEAAJUDateTime@Foundation@6@@Z
    virtual long put_CacheExpirationTime(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWebAccountProviderRequestTokenBase@Provider@Web@Authentication@Security@Windows@@MEAA@XZ
    virtual ~CWebAccountProviderRequestTokenBase();
};
} // namespace Windows::Security::Authentication::Web::Provider

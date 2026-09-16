#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 26 member(s).
namespace Windows::Internal::Security::Authentication::Web {
class CHttpCookieRequestResultOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@SAJPEAV123456@AEAV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    static long Serialize(WindissectOpaque *, WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~CHttpCookieRequestResultOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoWork@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@EEAAJXZ
    virtual long DoWork();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResultsImpl@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@EEAAJPEAPEAUIHttpCookieRequestResult@23456@@Z
    virtual long GetResultsImpl(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeOperationData@CHttpCookieRequestResultOperation@Web@Authentication@Security@Internal@Windows@@EEAAJPEAUHttpCookieRequestResultParams@23456@@Z
    virtual long InitializeOperationData(WindissectOpaque *);
};
} // namespace Windows::Internal::Security::Authentication::Web

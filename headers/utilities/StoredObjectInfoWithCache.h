#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 11 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class StoredObjectInfoWithCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEBG0KW4StoredObjectType@23456@AEAVStoredObjectId@23456@QEAUHSTRING__@@_NW4StoredObjectCacheType@23456@PEAPEAVStoredObjectInfo@23456@4@Z
    static long CreateInstance(unsigned short const *, unsigned short const *, unsigned long, int, WindissectOpaque &, HSTRING__* const, bool, int, WindissectOpaque * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@UEAAJXZ
    virtual long Delete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllObjectsCacheKey@StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@SAJW4StoredObjectType@23456@QEAUHSTRING__@@AEAVString@56@@Z
    static long GetAllObjectsCacheKey(int, HSTRING__* const, ::Windows::Internal::String &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBytes@StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@UEAAJPEAEKW4FileCreateDisposition@23456@@Z
    virtual long WriteBytes(unsigned char *, unsigned long, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~StoredObjectInfoWithCache();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@MEAAJAEAVStoredObjectId@23456@PEAUHSTRING__@@_N2@Z
    virtual long Initialize(WindissectOpaque &, HSTRING__*, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBytesFromCache@StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@AEBAJPEAUIWamObjectStore@Web@3456@PEAPEAEPEAK_N@Z
    long ReadBytesFromCache(WindissectOpaque *, unsigned char * *, unsigned long *, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBytesInternal@StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@AEAAJPEAPEAEPEAK_N@Z
    long ReadBytesInternal(unsigned char * *, unsigned long *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBytesToCache@StoredObjectInfoWithCache@TokenBroker@Authentication@Security@Internal@Windows@@AEBAJPEAUIWamObjectStore@Web@3456@PEAEK@Z
    long WriteBytesToCache(WindissectOpaque *, unsigned char *, unsigned long) const;
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker

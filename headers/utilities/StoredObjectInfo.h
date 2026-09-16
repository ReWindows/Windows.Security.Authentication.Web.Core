#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 14 member(s).
namespace Windows::Internal::Security::Authentication::TokenBroker {
class StoredObjectInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@SAJPEBG0KW4StoredObjectType@23456@AEAVStoredObjectId@23456@QEAUHSTRING__@@_NPEAPEAV123456@4@Z
    static long CreateInstance(unsigned short const *, unsigned short const *, unsigned long, int, WindissectOpaque &, HSTRING__* const, bool, WindissectOpaque * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Delete@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@UEAAJXZ
    virtual long Delete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRetriesDataFromObjectType@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@SAJW4StoredObjectType@23456@PEAPEAKPEAK@Z
    static long GetRetriesDataFromObjectType(int, unsigned long * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoredObjectInfo@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@SAJW4StoredObjectType@23456@AEAVStoredObjectId@23456@QEAUHSTRING__@@PEAPEAV123456@_N4@Z
    static long GetStoredObjectInfo(int, WindissectOpaque &, HSTRING__* const, WindissectOpaque * *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBytes@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@UEAAJPEAEKW4FileCreateDisposition@23456@@Z
    virtual long WriteBytes(unsigned char *, unsigned long, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@UEAA@XZ
    virtual ~StoredObjectInfo();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectTypeDirectoryNameFromObjectType@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@KAJW4StoredObjectType@23456@PEAPEBG@Z
    static long GetObjectTypeDirectoryNameFromObjectType(int, unsigned short const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@MEAAJAEAVStoredObjectId@23456@PEAUHSTRING__@@_N2@Z
    virtual long Initialize(WindissectOpaque &, HSTRING__*, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockFileForAccess@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@IEAAJW4FileCreateDisposition@23456@W4FileAccessType@@PEA_N@Z
    long LockFileForAccess(int, int, bool *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildObjectFolderAndFilePath@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@AEAAJXZ
    long BuildObjectFolderAndFilePath();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMissingTokenBrokerFolders@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@AEBAKXZ
    unsigned long CreateMissingTokenBrokerFolders() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBytesInternal@StoredObjectInfo@TokenBroker@Authentication@Security@Internal@Windows@@AEAAJPEAPEAEPEAKPEA_J_N@Z
    long ReadBytesInternal(unsigned char * *, unsigned long *, int64_t *, bool);
};
} // namespace Windows::Internal::Security::Authentication::TokenBroker

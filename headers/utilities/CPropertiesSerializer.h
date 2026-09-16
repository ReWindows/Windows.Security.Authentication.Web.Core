#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Security.Authentication.Web.Core.dll by Windissect. 30 member(s).
namespace Windows::Internal::Security {
class CPropertiesSerializer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBufferProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIBuffer@Streams@Storage@4@@Z
    long AddBufferProperty(HSTRING__*, ::Windows::Storage::Streams::IBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBytesProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAEK@Z
    long AddBytesProperty(HSTRING__*, unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHStringPropertyBagProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@@Z
    long AddHStringPropertyBagProperty(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInt64Property@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@_J@Z
    long AddInt64Property(HSTRING__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPropertySetProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@4@@Z
    long AddPropertySetProperty(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStringProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z
    long AddStringProperty(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUInt32Property@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z
    long AddUInt32Property(HSTRING__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUInt64Property@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@_K@Z
    long AddUInt64Property(HSTRING__*, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUriProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIUriRuntimeClass@Foundation@4@@Z
    long AddUriProperty(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BufferToBytes@CPropertiesSerializer@Security@Internal@Windows@@SAJPEAUIBuffer@Streams@Storage@4@PEAPEAEPEAK@Z
    static long BufferToBytes(::Windows::Storage::Streams::IBuffer *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BufferToPropertySet@CPropertiesSerializer@Security@Internal@Windows@@SAJPEAUIBuffer@Streams@Storage@4@PEAPEAUIPropertySet@Collections@Foundation@4@@Z
    static long BufferToPropertySet(::Windows::Storage::Streams::IBuffer *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BytesToBuffer@CPropertiesSerializer@Security@Internal@Windows@@SAJPEAEKPEAPEAUIBuffer@Streams@Storage@4@@Z
    static long BytesToBuffer(unsigned char *, unsigned long, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAUIBuffer@Streams@Storage@4@@Z
    long GetBufferProperty(HSTRING__*, ::Windows::Storage::Streams::IBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBytesProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAEPEAK@Z
    long GetBytesProperty(HSTRING__*, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHStringPropertyBagProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@@Z
    long GetHStringPropertyBagProperty(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInt64Property@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEA_J@Z
    long GetInt64Property(HSTRING__*, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertySetProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@4@@Z
    long GetPropertySetProperty(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerializedBytes@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAPEAEPEAK@Z
    long GetSerializedBytes(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSerializedBytesCount@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAK@Z
    long GetSerializedBytesCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAU5@@Z
    long GetStringProperty(HSTRING__*, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUInt32Property@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAI@Z
    long GetUInt32Property(HSTRING__*, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUriProperty@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAPEAUIUriRuntimeClass@Foundation@4@@Z
    long GetUriProperty(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HStringPropertyBagToPropertySet@CPropertiesSerializer@Security@Internal@Windows@@SAJPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@PEAPEAUIPropertySet@674@@Z
    static long HStringPropertyBagToPropertySet(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPropertiesSerializer@Security@Internal@Windows@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromBytes@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAEK@Z
    long InitializeFromBytes(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromPropertySet@CPropertiesSerializer@Security@Internal@Windows@@QEAAJPEAUIPropertySet@Collections@Foundation@4@@Z
    long InitializeFromPropertySet(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropertySetToHStringPropertyBag@CPropertiesSerializer@Security@Internal@Windows@@SAJPEAUIPropertySet@Collections@Foundation@4@PEAPEAU?$IMap@PEAUHSTRING__@@PEAU1@@674@@Z
    static long PropertySetToHStringPropertyBag(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Swap@CPropertiesSerializer@Security@Internal@Windows@@QEAAXAEAV1234@@Z
    void Swap(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertiesSerializer@Security@Internal@Windows@@QEAA@XZ
    ~CPropertiesSerializer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CPropertiesSerializer@Security@Internal@Windows@@AEAAJXZ
    long Serialize();
};
} // namespace Windows::Internal::Security

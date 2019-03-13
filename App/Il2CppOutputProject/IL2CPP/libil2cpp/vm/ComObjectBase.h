#pragma once

<<<<<<< HEAD
#include "il2cpp-object-internals.h"
=======
#include "gc/GCHandle.h"
#include "il2cpp-string-types.h"
#include "os/WindowsRuntime.h"
#include "vm/Atomic.h"
#include "vm/COM.h"
#include "vm/Exception.h"
#include "vm/MarshalAlloc.h"
#include "vm/WindowsRuntime.h"
#include "utils/Memory.h"
#include "utils/StringUtils.h"

struct Il2CppObject;
struct Il2CppIUnknown;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

namespace il2cpp
{
namespace vm
{
<<<<<<< HEAD
    struct LIBIL2CPP_CODEGEN_API NOVTABLE ComObjectBase : Il2CppIInspectable, Il2CppIMarshal, Il2CppIManagedObjectHolder, Il2CppIWeakReferenceSource
=======
    struct LIBIL2CPP_CODEGEN_API NOVTABLE ComObjectBase : Il2CppIInspectable, Il2CppIMarshal, Il2CppIManagedObjectHolder
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    {
    private:
        Il2CppIMarshal* m_FreeThreadedMarshaler;
        Il2CppObject* m_ManagedObject;

    public:
        inline ComObjectBase(Il2CppObject* obj) :
            m_ManagedObject(obj),
            m_FreeThreadedMarshaler(NULL)
        {
            IL2CPP_ASSERT(obj != NULL);
        }

        inline ~ComObjectBase()
        {
            if (m_FreeThreadedMarshaler)
                m_FreeThreadedMarshaler->Release();
        }

<<<<<<< HEAD
        virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE;
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE;
        virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE;
        virtual Il2CppObject* STDCALL GetManagedObject() IL2CPP_OVERRIDE;
        virtual il2cpp_hresult_t STDCALL GetUnmarshalClass(const Il2CppGuid& iid, void* object, uint32_t context, void* reserved, uint32_t flags, Il2CppGuid* clsid) IL2CPP_OVERRIDE;
        virtual il2cpp_hresult_t STDCALL GetMarshalSizeMax(const Il2CppGuid& iid, void* object, uint32_t context, void* reserved, uint32_t flags, uint32_t* size) IL2CPP_OVERRIDE;
        virtual il2cpp_hresult_t STDCALL MarshalInterface(Il2CppIStream* stream, const Il2CppGuid& iid, void* object, uint32_t context, void* reserved, uint32_t flags) IL2CPP_OVERRIDE;
        virtual il2cpp_hresult_t STDCALL UnmarshalInterface(Il2CppIStream* stream, const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE;
        virtual il2cpp_hresult_t STDCALL ReleaseMarshalData(Il2CppIStream* stream) IL2CPP_OVERRIDE;
        virtual il2cpp_hresult_t STDCALL DisconnectObject(uint32_t reserved) IL2CPP_OVERRIDE;
<<<<<<< HEAD
        virtual il2cpp_hresult_t STDCALL GetWeakReference(Il2CppIWeakReference** weakReference) IL2CPP_FINAL IL2CPP_OVERRIDE;
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

        FORCE_INLINE Il2CppObject* GetManagedObjectInline() const
        {
            return m_ManagedObject;
        }

    protected:
        FORCE_INLINE Il2CppIInspectable* GetIdentity()
        {
            return this;
        }

    private:
        ComObjectBase(const ComObjectBase&);
        ComObjectBase& operator=(const ComObjectBase&);

        il2cpp_hresult_t GetFreeThreadedMarshalerNoAddRef(Il2CppIMarshal** destination);
    };
} /* namespace vm */
} /* namespace il2cpp */

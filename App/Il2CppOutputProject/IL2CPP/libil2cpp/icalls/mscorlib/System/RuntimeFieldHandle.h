#pragma once
#if NET_4_0
#include "il2cpp-object-internals.h"

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
    class LIBIL2CPP_CODEGEN_API RuntimeFieldHandle
    {
    public:
<<<<<<< HEAD
        static void SetValueDirect(Il2CppReflectionField* field, Il2CppObject* fieldType, Il2CppTypedRef* typedRef, Il2CppObject* value, Il2CppObject* contextType);
=======
        static void SetValueDirect(Il2CppObject* field, Il2CppObject* fieldType, void* pTypedRef, Il2CppObject* value, Il2CppObject* contextType);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        static void SetValueInternal(Il2CppReflectionField* fi, Il2CppObject* obj, Il2CppObject* value);
    };
} // namespace System
} // namespace mscorlib
} // namespace icalls
} // namespace il2cpp
#endif

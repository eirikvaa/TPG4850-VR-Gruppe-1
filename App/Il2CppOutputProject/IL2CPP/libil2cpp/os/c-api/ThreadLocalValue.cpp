<<<<<<< HEAD
#include "os/c-api/il2cpp-config-platforms.h"
=======
#include "il2cpp-config.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#include "os/c-api/ThreadLocalValue-c-api.h"
#include "os/ThreadLocalValue.h"

extern "C"
{
UnityPalThreadLocalValue* UnityPalThreadLocalValueNew()
{
    return new il2cpp::os::ThreadLocalValue();
}

void UnityPalThreadLocalValueDelete(UnityPalThreadLocalValue* object)
{
    IL2CPP_ASSERT(object);
    delete object;
}

UnityPalErrorCode UnityPalThreadLocalValueSetValue(UnityPalThreadLocalValue* object, void* value)
{
    IL2CPP_ASSERT(object);
    return object->SetValue(value);
}

UnityPalErrorCode UnityPalThreadLocalValueGetValue(UnityPalThreadLocalValue* object, void** value)
{
    IL2CPP_ASSERT(object);
    return object->GetValue(value);
}
}

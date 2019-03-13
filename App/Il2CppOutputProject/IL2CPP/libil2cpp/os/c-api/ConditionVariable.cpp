#if NET_4_0
<<<<<<< HEAD
#include "os/c-api/il2cpp-config-platforms.h"
=======
#include "il2cpp-config.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#include "os/c-api/ConditionVariable-c-api.h"
#include "os/c-api/Mutex-c-api.h"
#include "os/ConditionVariable.h"

extern "C"
{
UnityPalConditionVariable* UnityPalConditionVariableNew()
{
    return new il2cpp::os::ConditionVariable();
}

void UnityPalConditionVariableDelete(UnityPalConditionVariable* object)
{
    IL2CPP_ASSERT(object);
    delete object;
}

int UnityPalConditionVariableWait(UnityPalConditionVariable* object, UnityPalFastMutex* lock)
{
    IL2CPP_ASSERT(object);
    return object->Wait(lock);
}

int UnityPalConditionVariableTimedWait(UnityPalConditionVariable* object, UnityPalFastMutex* lock, uint32_t timeout_ms)
{
    IL2CPP_ASSERT(object);
    return object->TimedWait(lock, timeout_ms);
}

void UnityPalConditionVariableBroadcast(UnityPalConditionVariable* object)
{
    IL2CPP_ASSERT(object);
    object->Broadcast();
}

void UnityPalConditionVariableSignal(UnityPalConditionVariable* object)
{
    IL2CPP_ASSERT(object);
    object->Signal();
}
}
#endif

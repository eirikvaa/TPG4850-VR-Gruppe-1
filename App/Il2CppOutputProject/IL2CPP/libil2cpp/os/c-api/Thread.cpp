#include "Thread-c-api.h"
#include "os/Thread.h"

void UnityPalThreadInitialize()
{
    il2cpp::os::Thread::Init();
}

void UnityPalSleep(uint32_t milliseconds)
{
    il2cpp::os::Thread::Sleep(milliseconds, false);
}
<<<<<<< HEAD

UnityPalThreadId UnityPalGetCurrentThreadId()
{
    return il2cpp::os::Thread::GetCurrentThread()->Id();
}
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#pragma once

#include <stdint.h>

#if defined(__cplusplus)
<<<<<<< HEAD
#include "os/Thread.h"

typedef il2cpp::os::Thread::ThreadId UnityPalThreadId;

#else

typedef uint64_t UnityPalThreadId;

#endif //__cplusplus

#if defined(__cplusplus)
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
extern "C"
{
#endif

void UnityPalThreadInitialize();
void UnityPalSleep(uint32_t milliseconds);
<<<<<<< HEAD
UnityPalThreadId UnityPalGetCurrentThreadId();
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#if defined(__cplusplus)
}
#endif

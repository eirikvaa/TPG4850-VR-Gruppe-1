<<<<<<< HEAD
=======
#include "il2cpp-config.h"

>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#include "os/Semaphore.h"
#include "os/Atomic.h"
#if IL2CPP_TARGET_WINDOWS
#include "os/Win32/SemaphoreImpl.h"
#elif IL2CPP_TARGET_POSIX
#include "os/Posix/SemaphoreImpl.h"
#else
#include "os/SemaphoreImpl.h"
#endif

namespace il2cpp
{
namespace os
{
    Semaphore::Semaphore(int32_t initialValue, int32_t maximumValue)
        : m_Semaphore(new SemaphoreImpl(initialValue, maximumValue))
    {
    }

    Semaphore::~Semaphore()
    {
        delete m_Semaphore;
    }

    bool Semaphore::Post(int32_t releaseCount, int32_t* previousCount)
    {
        return m_Semaphore->Post(releaseCount, previousCount);
    }

    WaitStatus Semaphore::Wait(bool interruptible)
    {
        return m_Semaphore->Wait(interruptible);
    }

    WaitStatus Semaphore::Wait(uint32_t ms, bool interruptible)
    {
        return m_Semaphore->Wait(ms, interruptible);
    }
}
}

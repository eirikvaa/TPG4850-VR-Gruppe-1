<<<<<<< HEAD
#include "os/c-api/il2cpp-config-platforms.h"
=======
#include "il2cpp-config.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#if IL2CPP_THREADS_PTHREAD

#include <errno.h>
#include <limits>

#include "SemaphoreImpl.h"
#include "ThreadImpl.h"
#include "PosixHelpers.h"

namespace il2cpp
{
namespace os
{
    SemaphoreImpl::SemaphoreImpl(int32_t initialValue, int32_t maximumValue)
        : posix::PosixWaitObject(kSemaphore)
        , m_MaximumValue(maximumValue)
    {
        m_Count = initialValue;
    }

    bool SemaphoreImpl::Post(int32_t releaseCount, int32_t* previousCount)
    {
        uint32_t oldCount;
        {
            posix::PosixAutoLock lock(&m_Mutex);

            oldCount = m_Count;

            // Make sure we stay within range. Account for 32bit overflow.
            if (static_cast<uint64_t>(oldCount) + releaseCount > m_MaximumValue)
                return false;

            m_Count += releaseCount;

            pthread_cond_signal(&m_Condition);
        }

        if (previousCount)
            *previousCount = oldCount;

        return true;
    }
}
}

#endif // IL2CPP_THREADS_PTHREAD

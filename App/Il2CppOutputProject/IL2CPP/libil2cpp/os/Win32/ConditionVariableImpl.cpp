<<<<<<< HEAD
#include "os/c-api/il2cpp-config-platforms.h"
=======
#include "il2cpp-config.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#if NET_4_0
#if IL2CPP_THREADS_WIN32

#include "MutexImpl.h"
#include "ConditionVariableImpl.h"
#include "WindowsHelpers.h"

namespace il2cpp
{
namespace os
{
    ConditionVariableImpl::ConditionVariableImpl()
    {
        ::InitializeConditionVariable(&m_ConditionVariable);
    }

    ConditionVariableImpl::~ConditionVariableImpl()
    {
        /* Beauty of win32 API: do not destroy it */
    }

    int ConditionVariableImpl::Wait(FastMutexImpl* lock)
    {
        return ::SleepConditionVariableCS(&m_ConditionVariable, lock->GetOSHandle(), INFINITE) ? 0 : 1;
    }

    int ConditionVariableImpl::TimedWait(FastMutexImpl* lock, uint32_t timeout_ms)
    {
        return ::SleepConditionVariableCS(&m_ConditionVariable, lock->GetOSHandle(), timeout_ms) ? 0 : 1;
    }

    void ConditionVariableImpl::Broadcast()
    {
        ::WakeAllConditionVariable(&m_ConditionVariable);
    }

    void ConditionVariableImpl::Signal()
    {
        ::WakeConditionVariable(&m_ConditionVariable);
    }
}
}

#endif
#endif

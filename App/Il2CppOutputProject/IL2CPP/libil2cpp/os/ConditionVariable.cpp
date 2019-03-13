#if NET_4_0
<<<<<<< HEAD
#include "os/c-api/il2cpp-config-platforms.h"
=======
#include "il2cpp-config.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#include "os/Mutex.h"
#include "os/ConditionVariable.h"
#if IL2CPP_THREADS_WIN32
#include "os/Win32/ConditionVariableImpl.h"
<<<<<<< HEAD
#elif IL2CPP_THREADS_PTHREAD
#include "os/Posix/ConditionVariableImpl.h"
#else
#include "os/ConditionVariableImpl.h"
=======
#else
#include "os/Posix/ConditionVariableImpl.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#endif


namespace il2cpp
{
namespace os
{
    ConditionVariable::ConditionVariable()
        : m_ConditionVariable(new ConditionVariableImpl())
    {
    }

    ConditionVariable::~ConditionVariable()
    {
        delete m_ConditionVariable;
    }

    int ConditionVariable::Wait(FastMutex* lock)
    {
        return m_ConditionVariable->Wait(lock->GetImpl());
    }

    int ConditionVariable::TimedWait(FastMutex* lock, uint32_t timeout_ms)
    {
        return m_ConditionVariable->TimedWait(lock->GetImpl(), timeout_ms);
    }

    void ConditionVariable::Broadcast()
    {
        m_ConditionVariable->Broadcast();
    }

    void ConditionVariable::Signal()
    {
        m_ConditionVariable->Signal();
    }
}
}
#endif

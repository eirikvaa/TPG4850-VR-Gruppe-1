#include "il2cpp-config.h"

#if IL2CPP_TARGET_POSIX

#include "os/NativeMethods.h"
#include "os/Process.h"

namespace il2cpp
{
namespace os
{
    bool NativeMethods::CloseProcess(ProcessHandle* handle)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::CloseProcess);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::CloseProcess);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return false;
    }

    bool NativeMethods::GetExitCodeProcess(ProcessHandle* handle, int32_t* exitCode)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::GetExitCodeProcess);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::GetExitCodeProcess);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return false;
    }

    int32_t NativeMethods::GetCurrentProcessId()
    {
        return Process::GetCurrentProcessId();
    }

    ProcessHandle* NativeMethods::GetCurrentProcess()
    {
        return Process::GetProcess(Process::GetCurrentProcessId());
    }
}
}
#endif

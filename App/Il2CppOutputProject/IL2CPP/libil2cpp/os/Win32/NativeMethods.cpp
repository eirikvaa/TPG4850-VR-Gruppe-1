#include "il2cpp-config.h"

#if IL2CPP_TARGET_WINDOWS

#include "WindowsHelpers.h"

<<<<<<< HEAD
#include "il2cpp-vm-support.h"
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#include "os/NativeMethods.h"
#include "vm/Exception.h"

namespace il2cpp
{
namespace os
{
    bool NativeMethods::CloseProcess(ProcessHandle* handle)
    {
        return ::CloseHandle(handle) != FALSE;
    }

    bool NativeMethods::GetExitCodeProcess(ProcessHandle* handle, int32_t* exitCode)
    {
#if IL2CPP_TARGET_WINDOWS_DESKTOP
        return ::GetExitCodeProcess((HANDLE)handle, (LPDWORD)exitCode);
#else
<<<<<<< HEAD
        IL2CPP_VM_NOT_SUPPORTED("GetExitCodeProcess", "Getting process exit code is not supported on WinRT based platforms.");
        return FALSE;
=======
        vm::Exception::Raise(vm::Exception::GetNotSupportedException("Getting process exit code is not supported on WinRT based platforms."));
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#endif
    }

    int32_t NativeMethods::GetCurrentProcessId()
    {
        return ::GetCurrentProcessId();
    }

    ProcessHandle* NativeMethods::GetCurrentProcess()
    {
        return (ProcessHandle*)::GetCurrentProcess();
    }
}
}

#endif

#if NET_4_0
#include "il2cpp-config.h"
#include "NativeMethods.h"
#include "os/Win32/WindowsHeaders.h"
#include "os/NativeMethods.h"
#include "os/Process.h"

namespace il2cpp
{
namespace icalls
{
namespace System
{
namespace Microsoft
{
namespace Win32
{
    bool NativeMethods::CloseProcess(intptr_t handle)
    {
        return os::NativeMethods::CloseProcess((il2cpp::os::ProcessHandle*)handle);
    }

    bool NativeMethods::GetExitCodeProcess(intptr_t processHandle, int32_t* exitCode)
    {
        return os::NativeMethods::GetExitCodeProcess((il2cpp::os::ProcessHandle*)processHandle, exitCode);
    }

    bool NativeMethods::GetProcessTimes(intptr_t handle, int64_t* creation, int64_t* exit, int64_t* kernel, int64_t* user)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::GetProcessTimes);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::GetProcessTimes);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return false;
    }

    bool NativeMethods::GetProcessWorkingSetSize(intptr_t handle, intptr_t* min, intptr_t* max)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::GetProcessWorkingSetSize);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::GetProcessWorkingSetSize);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return false;
    }

    bool NativeMethods::SetPriorityClass(intptr_t handle, int32_t priorityClass)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::SetPriorityClass);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::SetPriorityClass);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return false;
    }

    bool NativeMethods::SetProcessWorkingSetSize(intptr_t handle, intptr_t min, intptr_t max)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::SetProcessWorkingSetSize);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::SetProcessWorkingSetSize);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return false;
    }

    bool NativeMethods::TerminateProcess(intptr_t processHandle, int32_t exitCode)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::TerminateProcess);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::TerminateProcess);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return false;
    }

    int32_t NativeMethods::GetCurrentProcessId()
    {
        return os::NativeMethods::GetCurrentProcessId();
    }

    int32_t NativeMethods::GetPriorityClass(intptr_t handle)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::GetPriorityClass);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::GetPriorityClass);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return 0;
    }

    int32_t NativeMethods::WaitForInputIdle(intptr_t handle, int32_t milliseconds)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(NativeMethods::WaitForInputIdle);
=======
        NOT_IMPLEMENTED_ICALL(NativeMethods::WaitForInputIdle);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return 0;
    }

    intptr_t NativeMethods::GetCurrentProcess()
    {
        return reinterpret_cast<intptr_t>(os::NativeMethods::GetCurrentProcess());
    }
} // namespace Win32
} // namespace Microsoft
} // namespace System
} // namespace icalls
} // namespace il2cpp
#endif

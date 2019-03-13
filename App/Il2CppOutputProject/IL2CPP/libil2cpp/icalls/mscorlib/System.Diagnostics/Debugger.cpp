#include "il2cpp-config.h"

#include "icalls/mscorlib/System.Diagnostics/Debugger.h"
<<<<<<< HEAD
#include "vm-utils/Debugger.h"
=======
#include "os/Debug.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
namespace Diagnostics
{
// Until we have il2cpp debugger, return whether a native debugger is attached
    bool Debugger::IsAttached_internal()
    {
<<<<<<< HEAD
        return utils::Debugger::GetIsDebuggerAttached();
=======
        return os::Debug::IsDebuggerPresent();
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    }

#if NET_4_0
    bool Debugger::IsLogging()
    {
<<<<<<< HEAD
#if IL2CPP_MONO_DEBUGGER
        return utils::Debugger::IsLoggingEnabled();
#else
        return false;
#endif
=======
        NOT_IMPLEMENTED_ICALL(Debugger::IsLogging);
        IL2CPP_UNREACHABLE;
        return false;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    }

    void Debugger::Log(int32_t level, Il2CppString* category, Il2CppString* message)
    {
<<<<<<< HEAD
#if IL2CPP_MONO_DEBUGGER
        utils::Debugger::Log(level, category, message);
#endif
=======
        NOT_IMPLEMENTED_ICALL(Debugger::Log);
        IL2CPP_UNREACHABLE;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    }

#endif
} /* namespace Diagnostics */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */

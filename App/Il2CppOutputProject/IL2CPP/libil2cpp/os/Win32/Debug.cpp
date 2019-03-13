<<<<<<< HEAD
#include "os/c-api/il2cpp-config-platforms.h"
=======
#include "il2cpp-config.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#if IL2CPP_TARGET_WINDOWS

#include "os/Debug.h"
#include "os/Win32/WindowsHeaders.h"
<<<<<<< HEAD
#include "utils/StringUtils.h"
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

namespace il2cpp
{
namespace os
{
    bool Debug::IsDebuggerPresent()
    {
        return ::IsDebuggerPresent() != FALSE;
    }
<<<<<<< HEAD

    void Debug::WriteString(const utils::StringView<Il2CppNativeChar>& message)
    {
        OutputDebugString(message.Str());
    }
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
}
}

#endif

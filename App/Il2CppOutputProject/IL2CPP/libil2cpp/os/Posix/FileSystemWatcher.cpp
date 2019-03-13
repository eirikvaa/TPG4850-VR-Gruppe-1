#include "il2cpp-config.h"

#if !IL2CPP_USE_GENERIC_ENVIRONMENT && IL2CPP_TARGET_POSIX

#include <cassert>
#include "os/FileSystemWatcher.h"

namespace il2cpp
{
namespace os
{
namespace FileSystemWatcher
{
    int IsSupported()
    {
#if IL2CPP_TARGET_IOS
        return 0; // Not supported on iOS
#else
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(FileSystemWatcher::IsSupported);
=======
        NOT_IMPLEMENTED_ICALL(FileSystemWatcher::IsSupported);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        return 0;
#endif
    }
}
}
}

#endif

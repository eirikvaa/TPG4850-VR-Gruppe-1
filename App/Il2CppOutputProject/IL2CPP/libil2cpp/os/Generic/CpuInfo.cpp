<<<<<<< HEAD
#if NET_4_0
#include "os/c-api/il2cpp-config-platforms.h"
#if !IL2CPP_PLATFORM_SUPPORTS_CPU_INFO
=======
#include "il2cpp-config.h"

#if NET_4_0
#if IL2CPP_USE_GENERIC_CPU_INFO
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#include "os/CpuInfo.h"

namespace il2cpp
{
namespace os
{
    void* CpuInfo::Create()
    {
        return NULL;
    }

    int32_t CpuInfo::Usage(void* previous)
    {
        return 0;
    }
}
}

#endif
#endif

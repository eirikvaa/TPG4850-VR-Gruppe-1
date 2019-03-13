#if ENABLE_UNIT_TESTS
<<<<<<< HEAD
#include "os/c-api/il2cpp-config-platforms.h"
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#if NET_4_0

#include "UnitTest++.h"

#include "../CpuInfo-c-api.h"
#include "../../CpuInfo.h"

<<<<<<< HEAD
#if IL2CPP_PLATFORM_SUPPORTS_CPU_INFO
=======
#include "il2cpp-config.h"
#if !IL2CPP_USE_GENERIC_CPU_INFO
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

SUITE(CpuInfo)
{
    TEST(ApiCreateReturnsANonNullObject)
    {
        CHECK_NOT_NULL(UnityPalCpuInfoCreate());
    }

    TEST(ApiCpuInfoUsageMatchesClassCpuInfo)
    {
        CHECK_EQUAL(il2cpp::os::CpuInfo::Usage(NULL), UnityPalCpuInfoUsage(NULL));
    }
}

<<<<<<< HEAD
#endif // IL2CPP_PLATFORM_SUPPORTS_CPU_INFO
=======
#endif // !IL2CPP_USE_GENERIC_CPU_INFO
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#endif // NET_4_0
#endif // ENABLE_UNIT_TESTS

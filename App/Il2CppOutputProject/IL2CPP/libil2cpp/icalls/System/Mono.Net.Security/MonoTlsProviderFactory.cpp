#if NET_4_0

#include "il2cpp-config.h"
#include "MonoTlsProviderFactory.h"
<<<<<<< HEAD
#include "vm/String.h"
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

namespace il2cpp
{
namespace icalls
{
namespace System
{
namespace Mono
{
namespace Net
{
namespace Security
{
    bool MonoTlsProviderFactory::IsBtlsSupported()
    {
        return false;
    }
<<<<<<< HEAD

    Il2CppString* MonoTlsProviderFactory::GetDefaultProviderForPlatform()
    {
#if IL2CPP_TARGET_IOS
        return vm::String::New("apple");
#else
        return vm::String::New("mbedtls");
#endif
    }
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
} // namespace Security
} // namespace Net
} // namespace Mono
} // namespace System
} // namespace icalls
} // namespace il2cpp

#endif

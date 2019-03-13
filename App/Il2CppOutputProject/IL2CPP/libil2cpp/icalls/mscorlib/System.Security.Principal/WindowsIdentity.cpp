#include "il2cpp-config.h"
#include "icalls/mscorlib/System.Security.Principal/WindowsIdentity.h"
#include "vm/Exception.h"

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
namespace Security
{
namespace Principal
{
    Il2CppString* WindowsIdentity::GetTokenName(intptr_t token)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(WindowsIdentity::GetTokenName);
=======
        NOT_IMPLEMENTED_ICALL(WindowsIdentity::GetTokenName);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        return 0;
    }

    intptr_t WindowsIdentity::GetCurrentToken()
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(WindowsIdentity::GetCurrentToken);
=======
        NOT_IMPLEMENTED_ICALL(WindowsIdentity::GetCurrentToken);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        return intptr_t();
    }

    Il2CppArray* WindowsIdentity::_GetRoles(intptr_t token)
    {
        NOT_SUPPORTED_IL2CPP(WindowsIdentity::_GetRoles, "This icall is not supported by il2cpp.");

        return 0;
    }

    intptr_t WindowsIdentity::GetUserToken(Il2CppString* username)
    {
        NOT_SUPPORTED_IL2CPP(WindowsIdentity::GetUserToken, "This icall is not supported by il2cpp.");

        return intptr_t();
    }
} /* namespace Principal */
} /* namespace Security */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */

#include "il2cpp-config.h"
#include "icalls/mscorlib/System.Security/SecurityManager.h"
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
    bool SecurityManager::get_CheckExecutionRights()
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(SecurityManager::get_CheckExecutionRights);
=======
        NOT_IMPLEMENTED_ICALL(SecurityManager::get_CheckExecutionRights);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        return false;
    }

    bool SecurityManager::GetLinkDemandSecurity(mscorlib_System_Reflection_MethodBase * method, mscorlib_System_Security_RuntimeDeclSecurityActions * _____cdecl, mscorlib_System_Security_RuntimeDeclSecurityActions * mdecl)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(SecurityManager::GetLinkDemandSecurity);
=======
        NOT_IMPLEMENTED_ICALL(SecurityManager::GetLinkDemandSecurity);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        return false;
    }

    bool SecurityManager::get_SecurityEnabled()
    {
        return false;
    }

    void SecurityManager::set_CheckExecutionRights(bool value)
    {
        NOT_SUPPORTED_IL2CPP(SecurityManager::set_CheckExecutionRights, "This icall is not supported by il2cpp.");
    }

    void SecurityManager::set_SecurityEnabled(bool value)
    {
        NOT_SUPPORTED_IL2CPP(SecurityManager::set_SecurityEnabled, "This icall is not supported by il2cpp.");
    }
} /* namespace Security */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */

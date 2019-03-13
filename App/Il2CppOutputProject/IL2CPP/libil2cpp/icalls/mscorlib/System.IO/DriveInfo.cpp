#include "il2cpp-config.h"

#include "icalls/mscorlib/System.IO/DriveInfo.h"
#include "vm/Exception.h"

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace System
{
namespace IO
{
    bool DriveInfo::GetDiskFreeSpaceInternal(Il2CppString* pathName, uint64_t* freeBytesAvail, uint64_t* totalNumberOfBytes, uint64_t* totalNumberOfFreeBytes, MonoIOError* error)
    {
        NOT_SUPPORTED_IL2CPP(DriveInfo::GetDiskFreeSpaceInternal, "This icall is not supported by il2cpp.");

        return false;
    }

    uint32_t DriveInfo::GetDriveTypeInternal(Il2CppString* rootPathName)
    {
        NOT_SUPPORTED_IL2CPP(DriveInfo::GetDriveTypeInternal, "This icall is not supported by il2cpp.");

        return 0;
    }

#if NET_4_0
    Il2CppString* DriveInfo::GetDriveFormat(Il2CppString* rootPathName)
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL(DriveInfo::GetDriveFormat);
=======
        NOT_IMPLEMENTED_ICALL(DriveInfo::GetDriveFormat);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        IL2CPP_UNREACHABLE;
        return NULL;
    }

#endif
} /* namespace IO */
} /* namespace System */
} /* namespace mscorlib */
} /* namespace icalls */
} /* namespace il2cpp */

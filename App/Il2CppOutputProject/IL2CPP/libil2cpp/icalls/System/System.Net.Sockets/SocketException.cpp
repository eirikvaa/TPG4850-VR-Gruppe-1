#include "il2cpp-config.h"

#include "icalls/System/System.Net.Sockets/SocketException.h"

#include "os/Error.h"

namespace il2cpp
{
namespace icalls
{
namespace System
{
namespace System
{
namespace Net
{
namespace Sockets
{
    int32_t SocketException::WSAGetLastError()
    {
<<<<<<< HEAD
        IL2CPP_NOT_IMPLEMENTED_ICALL_NO_ASSERT(SocketException::WSAGetLastError, "Ignore this for now");
=======
        NOT_IMPLEMENTED_ICALL_NO_ASSERT(SocketException::WSAGetLastError, "Ignore this for now");
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

        return (int32_t)os::Error::GetLastError();
    }
} /* namespace Sockets */
} /* namespace Net */
} /* namespace System */
} /* namespace System */
} /* namespace icalls */
} /* namespace il2cpp */

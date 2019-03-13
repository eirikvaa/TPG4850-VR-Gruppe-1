#include "os/TimeZone.h"
#include "Allocator.h"

#include <string>

extern "C"
{
int32_t UnityPalGetTimeZoneData(int32_t year, int64_t data[4], const char* names[2])
{
    std::string namesBuffer[2];
<<<<<<< HEAD
#if NET_4_0
    bool dst_inverted;
    int32_t result = il2cpp::os::TimeZone::GetTimeZoneData(year, data, namesBuffer, &dst_inverted);
#else
    int32_t result = il2cpp::os::TimeZone::GetTimeZoneData(year, data, namesBuffer);
#endif
=======
    int32_t result = il2cpp::os::TimeZone::GetTimeZoneData(year, data, namesBuffer);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

    names[0] = Allocator::CopyToAllocatedStringBuffer(namesBuffer[0]);
    names[1] = Allocator::CopyToAllocatedStringBuffer(namesBuffer[1]);

    return result;
}
}

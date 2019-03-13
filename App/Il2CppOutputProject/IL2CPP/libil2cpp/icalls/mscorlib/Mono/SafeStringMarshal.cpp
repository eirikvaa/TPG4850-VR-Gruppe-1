#if NET_4_0

#include "il2cpp-config.h"
#include "SafeStringMarshal.h"
#include "utils/StringUtils.h"
<<<<<<< HEAD
#include "utils/Memory.h"
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

namespace il2cpp
{
namespace icalls
{
namespace mscorlib
{
namespace Mono
{
    intptr_t SafeStringMarshal::StringToUtf8(Il2CppString* str)
    {
        std::string strobj = il2cpp::utils::StringUtils::Utf16ToUtf8(str->chars, str->length);
<<<<<<< HEAD
        char* cstr = il2cpp::utils::StringUtils::StringDuplicate(strobj.c_str());
=======
        size_t size = strobj.size();
        char *cstr = new char[size + 1];
        memcpy(cstr, strobj.c_str(), size);
        cstr[size] = 0;

>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        return reinterpret_cast<intptr_t>(cstr);
    }

    void SafeStringMarshal::GFree(intptr_t ptr)
    {
<<<<<<< HEAD
        IL2CPP_FREE((char*)ptr);
=======
        char *cstr = (char*)ptr;
        delete cstr;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    }
} // namespace Mono
} // namespace mscorlib
} // namespace icalls
} // namespace il2cpp

#endif

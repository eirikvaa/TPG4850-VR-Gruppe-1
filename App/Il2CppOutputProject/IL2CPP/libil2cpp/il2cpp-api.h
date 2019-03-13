#pragma once

#include <stdint.h>

<<<<<<< HEAD
#include "il2cpp-config-api.h"

#if IL2CPP_API_DYNAMIC_NO_DLSYM
#if defined(__cplusplus)
extern "C"
{
#endif // __cplusplus
IL2CPP_EXPORT void il2cpp_api_register_symbols(void);
IL2CPP_EXPORT void* il2cpp_api_lookup_symbol(const char* name);
#if defined(__cplusplus)
}
#endif // __cplusplus
#endif

#if defined(__cplusplus)
extern "C"
{
#endif // __cplusplus
=======
#include "il2cpp-config.h"

#if IL2CPP_API_DYNAMIC_NO_DLSYM
extern "C"
{
IL2CPP_EXPORT void il2cpp_api_register_symbols(void);
IL2CPP_EXPORT void* il2cpp_api_lookup_symbol(const char* name);
}
#endif

extern "C"
{
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#define DO_API(r, n, p)             IL2CPP_EXPORT r n p;
#define DO_API_NO_RETURN(r, n, p)   IL2CPP_EXPORT NORETURN r n p;
#include "il2cpp-api-functions.h"
#undef DO_API
#undef DO_API_NORETURN
<<<<<<< HEAD
#if defined(__cplusplus)
}
#endif // __cplusplus
=======
}
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#pragma once

#include "File-c-api.h"

#if defined(__cplusplus)
extern "C"
{
#endif

void* UnityPalMemoryMappedFileMap(UnityPalFileHandle* file);
void UnityPalMemoryMappedFileUnmap(void* address);

<<<<<<< HEAD
void* UnityPalMemoryMappedFileMapWithParams(UnityPalFileHandle* file, int64_t length, int64_t offset);
void UnityPalMemoryMappedFileUnmapWithParams(void* address, int64_t length);
=======
void* UnityPalMemoryMappedFileMapWithParams(UnityPalFileHandle* file, size_t length, size_t offset);
void* UnityPalMemoryMappedFileMapWithFileDescriptor(int fd, size_t length, size_t offset);
void UnityPalMemoryMappedFileUnmapWithParams(void* address, size_t length);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#if defined(__cplusplus)
}
#endif

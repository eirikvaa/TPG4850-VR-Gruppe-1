<<<<<<< HEAD
#include "os/c-api/MemoryMappedFile-c-api.h"
#include "utils/MemoryMappedFile.h"
=======
#include "os/MemoryMappedFile.h"
#include "os/c-api/MemoryMappedFile-c-api.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

extern "C"
{
void* UnityPalMemoryMappedFileMap(UnityPalFileHandle* file)
{
<<<<<<< HEAD
    return il2cpp::utils::MemoryMappedFile::Map(file);
=======
    return il2cpp::os::MemoryMappedFile::Map(file);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
}

void UnityPalMemoryMappedFileUnmap(void* address)
{
<<<<<<< HEAD
    il2cpp::utils::MemoryMappedFile::Unmap(address);
}

void* UnityPalMemoryMappedFileMapWithParams(UnityPalFileHandle* file, int64_t length, int64_t offset)
{
    return il2cpp::utils::MemoryMappedFile::Map(file, length, offset);
}

void UnityPalMemoryMappedFileUnmapWithParams(void* address, int64_t length)
{
    il2cpp::utils::MemoryMappedFile::Unmap(address, length);
=======
    il2cpp::os::MemoryMappedFile::Unmap(address);
}

void* UnityPalMemoryMappedFileMapWithParams(UnityPalFileHandle* file, size_t length, size_t offset)
{
    return il2cpp::os::MemoryMappedFile::Map(file, length, offset);
}

void UnityPalMemoryMappedFileUnmapWithParams(void* address, size_t length)
{
    il2cpp::os::MemoryMappedFile::Unmap(address, length);
}

void* UnityPalMemoryMappedFileMapWithFileDescriptor(int fd, size_t length, size_t offset)
{
#if IL2CPP_TARGET_POSIX
    return il2cpp::os::MemoryMappedFile::Map(fd, length, offset);
#else
    IL2CPP_ASSERT(false && "mmap with file descriptor not supported");
    return NULL;
#endif
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
}
}

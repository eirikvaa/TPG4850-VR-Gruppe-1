#include "il2cpp-config.h"
#include "MetadataLoader.h"
#include "os/File.h"
<<<<<<< HEAD
#include "os/Mutex.h"
#include "utils/MemoryMappedFile.h"
=======
#include "os/MemoryMappedFile.h"
#include "os/Mutex.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#include "utils/PathUtils.h"
#include "utils/Runtime.h"

using namespace il2cpp::os;
using namespace il2cpp::vm;

void* MetadataLoader::LoadMetadataFile(const char* fileName)
{
    std::string resourcesDirectory = utils::PathUtils::Combine(utils::Runtime::GetDataDir(), utils::StringView<char>("Metadata"));

    std::string resourceFilePath = utils::PathUtils::Combine(resourcesDirectory, utils::StringView<char>(fileName, strlen(fileName)));

    int error = 0;
    FileHandle* handle = File::Open(resourceFilePath, kFileModeOpen, kFileAccessRead, kFileShareRead, kFileOptionsNone, &error);
    if (error != 0)
        return NULL;

<<<<<<< HEAD
    void* fileBuffer = utils::MemoryMappedFile::Map(handle);
=======
    void* fileBuffer = MemoryMappedFile::Map(handle);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

    File::Close(handle, &error);
    if (error != 0)
    {
<<<<<<< HEAD
        utils::MemoryMappedFile::Unmap(fileBuffer);
=======
        MemoryMappedFile::Unmap(fileBuffer);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        fileBuffer = NULL;
        return NULL;
    }

    return fileBuffer;
}

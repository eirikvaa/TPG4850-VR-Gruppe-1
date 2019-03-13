#include "il2cpp-config.h"
#include "GenericContainer.h"
#include "MetadataCache.h"

namespace il2cpp
{
namespace vm
{
    Il2CppClass* GenericContainer::GetDeclaringType(const Il2CppGenericContainer* genericContainer)
    {
        if (genericContainer->is_method)
<<<<<<< HEAD
            return MetadataCache::GetMethodInfoFromMethodDefinitionIndex(genericContainer->ownerIndex)->klass;
=======
            return MetadataCache::GetMethodInfoFromMethodDefinitionIndex(genericContainer->ownerIndex)->declaring_type;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

        return MetadataCache::GetTypeInfoFromTypeDefinitionIndex(genericContainer->ownerIndex);
    }

    const Il2CppGenericParameter* GenericContainer::GetGenericParameter(const Il2CppGenericContainer* genericContainer, uint16_t index)
    {
        IL2CPP_ASSERT(index < genericContainer->type_argc);
        return MetadataCache::GetGenericParameterFromIndex(genericContainer->genericParameterStart + index);
    }
} /* namespace vm */
} /* namespace il2cpp */

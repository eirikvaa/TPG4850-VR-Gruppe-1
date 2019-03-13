#pragma once

#include <stdint.h>
#include "il2cpp-blob.h"
#include "il2cpp-metadata.h"

struct Il2CppClass;
struct MethodInfo;
struct Il2CppType;

<<<<<<< HEAD
typedef struct Il2CppArrayType
=======
struct Il2CppArrayType
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
    const Il2CppType* etype;
    uint8_t rank;
    uint8_t numsizes;
    uint8_t numlobounds;
    int *sizes;
    int *lobounds;
<<<<<<< HEAD
} Il2CppArrayType;

typedef struct Il2CppGenericInst
{
    uint32_t type_argc;
    const Il2CppType **type_argv;
} Il2CppGenericInst;

typedef struct Il2CppGenericContext
=======
};

struct Il2CppGenericInst
{
    uint32_t type_argc;
    const Il2CppType **type_argv;
};

struct Il2CppGenericContext
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
    /* The instantiation corresponding to the class generic parameters */
    const Il2CppGenericInst *class_inst;
    /* The instantiation corresponding to the method generic parameters */
    const Il2CppGenericInst *method_inst;
<<<<<<< HEAD
} Il2CppGenericContext;

typedef struct Il2CppGenericParameter
=======
};

struct Il2CppGenericParameter
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
    GenericContainerIndex ownerIndex;  /* Type or method this parameter was defined in. */
    StringIndex nameIndex;
    GenericParameterConstraintIndex constraintsStart;
    int16_t constraintsCount;
    uint16_t num;
    uint16_t flags;
<<<<<<< HEAD
} Il2CppGenericParameter;

typedef struct Il2CppGenericContainer
=======
};

struct Il2CppGenericContainer
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
    /* index of the generic type definition or the generic method definition corresponding to this container */
    int32_t ownerIndex; // either index into Il2CppClass metadata array or Il2CppMethodDefinition array
    int32_t type_argc;
    /* If true, we're a generic method, otherwise a generic type definition. */
    int32_t is_method;
    /* Our type parameters. */
    GenericParameterIndex genericParameterStart;
<<<<<<< HEAD
} Il2CppGenericContainer;

typedef struct Il2CppGenericClass
=======
};

struct Il2CppGenericClass
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
    TypeDefinitionIndex typeDefinitionIndex;    /* the generic type definition */
    Il2CppGenericContext context;   /* a context that contains the type instantiation doesn't contain any method instantiation */
    Il2CppClass *cached_class;  /* if present, the Il2CppClass corresponding to the instantiation.  */
<<<<<<< HEAD
} Il2CppGenericClass;

typedef struct Il2CppGenericMethod
{
    const MethodInfo* methodDefinition;
    Il2CppGenericContext context;
} Il2CppGenericMethod;

typedef struct Il2CppType
=======
};

struct Il2CppGenericMethod
{
    const MethodInfo* methodDefinition;
    Il2CppGenericContext context;
};

struct Il2CppType
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
    union
    {
        // We have this dummy field first because pre C99 compilers (MSVC) can only initializer the first value in a union.
        void* dummy;
        TypeDefinitionIndex klassIndex; /* for VALUETYPE and CLASS */
        const Il2CppType *type;   /* for PTR and SZARRAY */
        Il2CppArrayType *array; /* for ARRAY */
        //MonoMethodSignature *method;
        GenericParameterIndex genericParameterIndex; /* for VAR and MVAR */
        Il2CppGenericClass *generic_class; /* for GENERICINST */
    } data;
    unsigned int attrs    : 16; /* param attributes or field flags */
    Il2CppTypeEnum type     : 8;
    unsigned int num_mods : 6;  /* max 64 modifiers follow at the end */
    unsigned int byref    : 1;
    unsigned int pinned   : 1;  /* valid when included in a local var signature */
    //MonoCustomMod modifiers [MONO_ZERO_LEN_ARRAY]; /* this may grow */
<<<<<<< HEAD
} Il2CppType;

typedef enum Il2CppCallConvention
=======
};

typedef enum
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
    IL2CPP_CALL_DEFAULT,
    IL2CPP_CALL_C,
    IL2CPP_CALL_STDCALL,
    IL2CPP_CALL_THISCALL,
    IL2CPP_CALL_FASTCALL,
    IL2CPP_CALL_VARARG
} Il2CppCallConvention;

<<<<<<< HEAD
typedef enum Il2CppCharSet
{
    CHARSET_ANSI,
    CHARSET_UNICODE,
    CHARSET_NOT_SPECIFIED
} Il2CppCharSet;
=======
enum Il2CppCharSet
{
    CHARSET_ANSI,
    CHARSET_UNICODE
};
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

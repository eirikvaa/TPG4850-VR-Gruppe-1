#pragma once

<<<<<<< HEAD
// Off by default, can be enabled in platform specific configuration
#ifndef UNITY_ATOMIC_USE_CLANG_ATOMICS
#   define UNITY_ATOMIC_USE_CLANG_ATOMICS 0
#endif
#ifndef UNITY_ATOMIC_USE_GCC_ATOMICS
#   define UNITY_ATOMIC_USE_GCC_ATOMICS 0
#endif

#if UNITY_ATOMIC_USE_GCC_ATOMICS || UNITY_ATOMIC_USE_CLANG_ATOMICS
#   if __SIZEOF_POINTER__ == 8
typedef long long non_atomic_word;
typedef __int128 non_atomic_word2;
#       define UNITY_ATOMIC_INT_OVERLOAD
#   elif __SIZEOF_POINTER__ == 4
typedef int non_atomic_word;
typedef long long non_atomic_word2;
#   else
#       error unsupported __SIZEOF_POINTER__
#   endif

#   define ATOMIC_HAS_DCAS

typedef non_atomic_word atomic_word;

union atomic_word2
{
    non_atomic_word2 v;
    struct
    {
        atomic_word lo;
        atomic_word hi;
    };
};
=======
UNITY_PLATFORM_BEGIN_NAMESPACE;

#if IL2CPP_TARGET_HAS_EXTENDED_ATOMICS

#   include "os/ExtendedAtomicTypes.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#elif defined(__x86_64__) || defined(_M_X64)

#   include <emmintrin.h>

<<<<<<< HEAD
/// atomic_word must be 8 bytes aligned if you want to use it with atomic_* ops.
=======
/// atomic_word must be 16 bytes aligned if you want to use it with atomic_* ops.
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#   if defined(_MSC_VER)
typedef __int64 atomic_word;
#   else
typedef long long atomic_word;
#   endif

/// atomic_word2 must be 16 bytes aligned if you want to use it with atomic_* ops.
union atomic_word2
{
    __m128i         v;
    struct
    {
        atomic_word lo, hi;
    };
};
    #define ATOMIC_HAS_DCAS
<<<<<<< HEAD
    #define UNITY_ATOMIC_INT_OVERLOAD

#elif defined(__x86__) || defined(__i386__) || defined(_M_IX86)

/// atomic_word must be 4 bytes aligned if you want to use it with atomic_* ops.
=======

#elif defined(__x86__) || defined(__i386__) || defined(_M_IX86)

/// atomic_word must be 8 bytes aligned if you want to use it with atomic_* ops.
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
typedef int atomic_word;

/// atomic_word2 must be 8 bytes aligned if you want to use it with atomic_* ops.
union atomic_word2
{
#   if defined(_MSC_VER)
    __int64 v;
#   else
    long long v;
#   endif
#   if !defined(__SSE2__)
    double d;
#   endif
    struct
    {
        atomic_word lo, hi;
    };
};
    #define ATOMIC_HAS_DCAS

<<<<<<< HEAD
#elif __ARMCC_VERSION // 3DS

typedef int atomic_word;
typedef int memory_order_t;

#   include "os/ExtendedAtomicTypes.h"

#elif (defined(__arm64__) || defined(__aarch64__)) && (defined(__clang__) || defined(__GNUC__))
=======
#elif (defined(__arm64__) || defined(__aarch64__))  && (defined(__clang__) || defined(__GNUC__))
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

typedef long long atomic_word;
struct atomic_word2
{
    atomic_word lo;
    atomic_word hi;
};
#   define ATOMIC_HAS_DCAS
#   define ATOMIC_HAS_LDR
<<<<<<< HEAD
#   define UNITY_ATOMIC_INT_OVERLOAD

#elif defined(_M_ARM) || (defined(__arm__) && (defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)) && (defined(__clang__) || defined(__GNUC__)))
=======

#elif defined(_M_ARM) || (defined(__arm__) && (defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)) && (!UNITY_STV_API) && (defined(__clang__) || defined(__GNUC__)))
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

typedef int atomic_word;
union atomic_word2
{
#   if defined(_MSC_VER)
    __int64 v;
#   else
    long long v;
#   endif
    struct
    {
        atomic_word lo;
        atomic_word hi;
    };
};
#   define ATOMIC_HAS_DCAS
#   if !defined(_MSC_VER)
#       define ATOMIC_HAS_LDR
#   endif

<<<<<<< HEAD
#elif PLATFORM_WINRT && defined(__arm__)

typedef __int32 atomic_word;
union atomic_word2
{
    __int64 v;
    struct
    {
        atomic_word lo;
        atomic_word hi;
    };
};
#   define ATOMIC_HAS_DCAS

#elif PLATFORM_PSVITA || (PLATFORM_WEBGL && SUPPORT_THREADS)

    #include <stdint.h>
=======
#elif PLATFORM_PSVITA

>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
typedef int32_t atomic_word;
union atomic_word2
{
    int64_t  v;
    struct
    {
        atomic_word lo;
        atomic_word hi;
    };
};
#   define ATOMIC_HAS_DCAS
#   define ATOMIC_HAS_LDR

#elif defined(__ppc64__) || defined(_ARCH_PPC64)

typedef long atomic_word;
#   define ATOMIC_HAS_LDR
<<<<<<< HEAD
#   define UNITY_ATOMIC_INT_OVERLOAD
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

#elif defined(__ppc__)

typedef int atomic_word;
#   define ATOMIC_HAS_LDR

#else

#   if defined(__LP64__)
typedef long long atomic_word;
<<<<<<< HEAD
#       define UNITY_ATOMIC_INT_OVERLOAD
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#   else
typedef int atomic_word;
#   endif

struct atomic_word2
{
    atomic_word lo;
    atomic_word hi;
};

#endif

<<<<<<< HEAD
#if defined(ATOMIC_HAS_DCAS)

    #define ATOMIC_HAS_QUEUE    2

#elif (defined(__arm64__) || defined(__aarch64__)) && (defined(__clang__) || defined(__GNUC__))

    #define ATOMIC_HAS_QUEUE    1

#elif defined(__arm__) && (defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)) && (defined(__clang__) || defined(__GNUC__) || defined(SN_TARGET_PSP2))

    #define ATOMIC_HAS_QUEUE    1

#endif
=======
UNITY_PLATFORM_END_NAMESPACE;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

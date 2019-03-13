#pragma once

#include "UnityPlatformConfigure.h"
#include "ExtendedAtomicTypes.h"
<<<<<<< HEAD
#include "AtomicNode.h"


UNITY_PLATFORM_BEGIN_NAMESPACE;

=======

UNITY_PLATFORM_BEGIN_NAMESPACE;

#if defined(ATOMIC_HAS_DCAS)

    #define ATOMIC_HAS_QUEUE    2

#elif (defined(__arm64__) || defined(__aarch64__)) && (defined(__clang__) || defined(__GNUC__))

    #define ATOMIC_HAS_QUEUE    1

#elif defined(__arm__) && (defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7S__)) && (!UNITY_STV_API) && (defined(__clang__) || defined(__GNUC__) || defined(SN_TARGET_PSP2))

    #define ATOMIC_HAS_QUEUE    1

#endif

class AtomicNode
{
    friend class AtomicStack;
    friend class AtomicQueue;

    volatile atomic_word _next;

public:
    void* data[3];

    AtomicNode *Next() const
    {
        return (AtomicNode*)_next;
    }

    AtomicNode *Link(AtomicNode *next);
};

>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#if defined(ATOMIC_HAS_QUEUE)


// A generic lockfree stack.
// Any thread can Push / Pop nodes to the stack.

// The stack is lockfree and highly optimized. It has different implementations for different architectures.

// On intel / arm it is built with double CAS:
// http://en.wikipedia.org/wiki/Double_compare-and-swap
// On PPC it is built on LL/SC:
// http://en.wikipedia.org/wiki/Load-link/store-conditional

class AtomicStack
{
#if defined(ATOMIC_HAS_DCAS)
    volatile atomic_word2   _top;
#else
    volatile atomic_word    _top;
#endif

public:
    AtomicStack();
    ~AtomicStack();

    int IsEmpty() const;

    void Push(AtomicNode *node);
    void PushAll(AtomicNode *first, AtomicNode *last);

    AtomicNode *Pop();
    AtomicNode *PopAll();
};

AtomicStack* CreateAtomicStack();
void DestroyAtomicStack(AtomicStack* s);


// A generic lockfree queue FIFO queue.
<<<<<<< HEAD
// Any thread can Enqueue / Dequeue in parallel.
// We do guarantee that all 3 data pointer are the same after dequeuing.
//
// But when pushing / popping a node there is no guarantee that the pointer to the AtomicNode is the same.
// Enqueue adds node to the head, and Dequeue pops it from the tail.
// Implementation relies on dummy head node which allow to modify next pointer atomically.
// Thus Dequeue pops not the enqueued node, but the next one.
// Empty:   [ head ] [next] [ tail ]
//           dummy      0    dummy
// Enqueue: [ head ] [next] [next] [ tail ]
//           node1   dummy     0    dummy
// Dequeue: [ head ] [next] [ tail ]   -> dummy dequeued, but with node1 data[3]
//           node1     0      node1
// Make sure to destroy nodes consistently.

// The queue is lockfree and highly optimized. It has different implementations for different architectures.
=======
// Any thread can Enqueue / Dequeue in paralell.
// When pushing / popping a node there is no guarantee that the pointer to the node is the same (void* data[3])
// We do guarantee that all 3 data pointer are the same after deqeuing.


// The queue is lockfree and highly optimized. It has different implementations for different archectures.
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

// On intel / arm it is built with double CAS:
// http://en.wikipedia.org/wiki/Double_compare-and-swap
// On PPC it is built on LL/SC:
// http://en.wikipedia.org/wiki/Load-link/store-conditional

class AtomicQueue
{
#if defined(ATOMIC_HAS_DCAS)
    volatile atomic_word2   _tail;
#else
    volatile atomic_word    _tail;
#endif
    volatile atomic_word    _head;

public:
    AtomicQueue();
    ~AtomicQueue();

    int IsEmpty() const;

    void Enqueue(AtomicNode *node);
    void EnqueueAll(AtomicNode *first, AtomicNode *last);
    AtomicNode *Dequeue();
};

AtomicQueue* CreateAtomicQueue();
void DestroyAtomicQueue(AtomicQueue* s);

#elif IL2CPP_SUPPORT_THREADS
#error Platform is missing atomic queue implementation
#endif

//
// Special concurrent list for JobQueue
// This code is not meant to be general purpose and should not be used outside of the job queue.

class AtomicList
{
#if defined(ATOMIC_HAS_DCAS)

    volatile atomic_word2   _top;

#else

    volatile atomic_word    _top;
    volatile atomic_word    _ver;

#endif

public:
    void Init();

    atomic_word Tag();
    AtomicNode *Peek();
    AtomicNode *Load(atomic_word &tag);

    AtomicNode *Clear(AtomicNode *old, atomic_word tag);

    bool Add(AtomicNode *first, AtomicNode *last, atomic_word tag);
    AtomicNode* Touch(atomic_word tag);
    void Reset(AtomicNode *node, atomic_word tag);
<<<<<<< HEAD
=======

    static void Relax();
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
};

UNITY_PLATFORM_END_NAMESPACE;

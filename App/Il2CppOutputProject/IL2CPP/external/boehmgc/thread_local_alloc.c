/*
 * Copyright (c) 2000-2005 by Hewlett-Packard Company.  All rights reserved.
 *
 * THIS MATERIAL IS PROVIDED AS IS, WITH ABSOLUTELY NO WARRANTY EXPRESSED
 * OR IMPLIED.  ANY USE IS AT YOUR OWN RISK.
 *
 * Permission is hereby granted to use or copy this program
 * for any purpose,  provided the above notices are retained on all copies.
 * Permission to modify the code and to distribute modified code is granted,
 * provided the above notices are retained, and a notice that the code was
 * modified is included with the above copyright notice.
 */

#include "private/gc_priv.h"

#if defined(THREAD_LOCAL_ALLOC)

#ifndef THREADS
# error "invalid config - THREAD_LOCAL_ALLOC requires GC_THREADS"
#endif

#include "private/thread_local_alloc.h"

#include <stdlib.h>

#if defined(USE_COMPILER_TLS)
<<<<<<< HEAD
  __thread GC_ATTR_TLS_FAST
#elif defined(USE_WIN32_COMPILER_TLS)
  __declspec(thread) GC_ATTR_TLS_FAST
=======
  __thread
#elif defined(USE_WIN32_COMPILER_TLS)
  __declspec(thread)
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#endif
GC_key_t GC_thread_key;

static GC_bool keys_initialized;

<<<<<<< HEAD
=======
#ifdef ENABLE_DISCLAIM
  GC_INNER ptr_t * GC_finalized_objfreelist = NULL;
        /* This variable is declared here to prevent linking of         */
        /* fnlz_mlc module unless the client uses the latter one.       */
#endif

>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
/* Return a single nonempty freelist fl to the global one pointed to    */
/* by gfl.                                                              */

static void return_single_freelist(void *fl, void **gfl)
{
<<<<<<< HEAD
    if (*gfl == 0) {
      *gfl = fl;
    } else {
      void *q, **qptr;

=======
    void *q, **qptr;

    if (*gfl == 0) {
      *gfl = fl;
    } else {
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
      GC_ASSERT(GC_size(fl) == GC_size(*gfl));
      /* Concatenate: */
        qptr = &(obj_link(fl));
        while ((word)(q = *qptr) >= HBLKSIZE)
          qptr = &(obj_link(q));
        GC_ASSERT(0 == q);
        *qptr = *gfl;
        *gfl = fl;
    }
}

/* Recover the contents of the freelist array fl into the global one gfl.*/
/* We hold the allocator lock.                                          */
static void return_freelists(void **fl, void **gfl)
{
    int i;

    for (i = 1; i < TINY_FREELISTS; ++i) {
        if ((word)(fl[i]) >= HBLKSIZE) {
<<<<<<< HEAD
          return_single_freelist(fl[i], &gfl[i]);
=======
          return_single_freelist(fl[i], gfl+i);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        }
        /* Clear fl[i], since the thread structure may hang around.     */
        /* Do it in a way that is likely to trap if we access it.       */
        fl[i] = (ptr_t)HBLKSIZE;
    }
    /* The 0 granule freelist really contains 1 granule objects.        */
#   ifdef GC_GCJ_SUPPORT
      if (fl[0] == ERROR_FL) return;
#   endif
    if ((word)(fl[0]) >= HBLKSIZE) {
<<<<<<< HEAD
        return_single_freelist(fl[0], &gfl[1]);
    }
}

#ifdef USE_PTHREAD_SPECIFIC
  /* Re-set the TLS value on thread cleanup to allow thread-local       */
  /* allocations to happen in the TLS destructors.                      */
  /* GC_unregister_my_thread (and similar routines) will finally set    */
  /* the GC_thread_key to NULL preventing this destructor from being    */
  /* called repeatedly.                                                 */
  static void reset_thread_key(void* v) {
    pthread_setspecific(GC_thread_key, v);
  }
#else
# define reset_thread_key 0
#endif

=======
        return_single_freelist(fl[0], gfl+1);
    }
}

>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
/* Each thread structure must be initialized.   */
/* This call must be made from the new thread.  */
GC_INNER void GC_init_thread_local(GC_tlfs p)
{
<<<<<<< HEAD
    int i, j, res;
=======
    int i;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

    GC_ASSERT(I_HOLD_LOCK());
    if (!EXPECT(keys_initialized, TRUE)) {
        GC_ASSERT((word)&GC_thread_key % sizeof(word) == 0);
<<<<<<< HEAD
        res = GC_key_create(&GC_thread_key, reset_thread_key);
        if (COVERT_DATAFLOW(res) != 0) {
=======
        if (0 != GC_key_create(&GC_thread_key, 0)) {
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
            ABORT("Failed to create key for local allocator");
        }
        keys_initialized = TRUE;
    }
<<<<<<< HEAD
    res = GC_setspecific(GC_thread_key, p);
    if (COVERT_DATAFLOW(res) != 0) {
        ABORT("Failed to set thread specific allocation pointers");
    }
    for (j = 0; j < TINY_FREELISTS; ++j) {
        for (i = 0; i < THREAD_FREELISTS_KINDS; ++i) {
            p -> _freelists[i][j] = (void *)(word)1;
        }
#       ifdef GC_GCJ_SUPPORT
            p -> gcj_freelists[j] = (void *)(word)1;
#       endif
    }
    /* The size 0 free lists are handled like the regular free lists,   */
    /* to ensure that the explicit deallocation works.  However,        */
    /* allocation of a size 0 "gcj" object is always an error.          */
#   ifdef GC_GCJ_SUPPORT
        p -> gcj_freelists[0] = ERROR_FL;
#   endif
=======
    if (0 != GC_setspecific(GC_thread_key, p)) {
        ABORT("Failed to set thread specific allocation pointers");
    }
    for (i = 1; i < TINY_FREELISTS; ++i) {
        p -> ptrfree_freelists[i] = (void *)(word)1;
        p -> normal_freelists[i] = (void *)(word)1;
#       ifdef GC_GCJ_SUPPORT
          p -> gcj_freelists[i] = (void *)(word)1;
#       endif
#       ifdef ENABLE_DISCLAIM
          p -> finalized_freelists[i] = (void *)(word)1;
#       endif
    }
    /* Set up the size 0 free lists.    */
    /* We now handle most of them like regular free lists, to ensure    */
    /* That explicit deallocation works.  However, allocation of a      */
    /* size 0 "gcj" object is always an error.                          */
    p -> ptrfree_freelists[0] = (void *)(word)1;
    p -> normal_freelists[0] = (void *)(word)1;
#   ifdef GC_GCJ_SUPPORT
        p -> gcj_freelists[0] = ERROR_FL;
#   endif
#   ifdef ENABLE_DISCLAIM
        p -> finalized_freelists[0] = (void *)(word)1;
#   endif
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
}

/* We hold the allocator lock.  */
GC_INNER void GC_destroy_thread_local(GC_tlfs p)
{
<<<<<<< HEAD
    int k;

    /* We currently only do this from the thread itself.        */
    GC_STATIC_ASSERT(THREAD_FREELISTS_KINDS <= MAXOBJKINDS);
    for (k = 0; k < THREAD_FREELISTS_KINDS; ++k) {
        if (k == (int)GC_n_kinds)
            break; /* kind is not created */
        return_freelists(p -> _freelists[k], GC_obj_kinds[k].ok_freelist);
    }
#   ifdef GC_GCJ_SUPPORT
        return_freelists(p -> gcj_freelists, (void **)GC_gcjobjfreelist);
#   endif
}

GC_API GC_ATTR_MALLOC void * GC_CALL GC_malloc_kind(size_t bytes, int kind)
{
    size_t granules;
    void *tsd;
    void *result;

#   if MAXOBJKINDS > THREAD_FREELISTS_KINDS
      if (EXPECT(kind >= THREAD_FREELISTS_KINDS, FALSE)) {
        return GC_malloc_kind_global(bytes, kind);
      }
#   endif
#   if !defined(USE_PTHREAD_SPECIFIC) && !defined(USE_WIN32_SPECIFIC)
    {
      GC_key_t k = GC_thread_key;

      if (EXPECT(0 == k, FALSE)) {
        /* We haven't yet run GC_init_parallel.  That means     */
        /* we also aren't locking, so this is fairly cheap.     */
        return GC_malloc_kind_global(bytes, kind);
      }
      tsd = GC_getspecific(k);
    }
#   else
      if (!EXPECT(keys_initialized, TRUE))
        return GC_malloc_kind_global(bytes, kind);
=======
    /* We currently only do this from the thread itself or from */
    /* the fork handler for a child process.                    */
    return_freelists(p -> ptrfree_freelists, GC_aobjfreelist);
    return_freelists(p -> normal_freelists, GC_objfreelist);
#   ifdef GC_GCJ_SUPPORT
        return_freelists(p -> gcj_freelists, (void **)GC_gcjobjfreelist);
#   endif
#   ifdef ENABLE_DISCLAIM
        return_freelists(p -> finalized_freelists,
                         (void **)GC_finalized_objfreelist);
#   endif
}

#ifdef GC_ASSERTIONS
  /* Defined in pthread_support.c or win32_threads.c. */
  GC_bool GC_is_thread_tsd_valid(void *tsd);
#endif

GC_API void * GC_CALL GC_malloc(size_t bytes)
{
    size_t granules = ROUNDED_UP_GRANULES(bytes);
    void *tsd;
    void *result;
    void **tiny_fl;

#   if !defined(USE_PTHREAD_SPECIFIC) && !defined(USE_WIN32_SPECIFIC)
      GC_key_t k = GC_thread_key;
      if (EXPECT(0 == k, FALSE)) {
        /* We haven't yet run GC_init_parallel.  That means     */
        /* we also aren't locking, so this is fairly cheap.     */
        return GC_core_malloc(bytes);
      }
      tsd = GC_getspecific(k);
#   else
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
      tsd = GC_getspecific(GC_thread_key);
#   endif
#   if !defined(USE_COMPILER_TLS) && !defined(USE_WIN32_COMPILER_TLS)
      if (EXPECT(0 == tsd, FALSE)) {
<<<<<<< HEAD
        return GC_malloc_kind_global(bytes, kind);
      }
#   endif
    GC_ASSERT(GC_is_initialized);
    GC_ASSERT(GC_is_thread_tsd_valid(tsd));
    granules = ROUNDED_UP_GRANULES(bytes);
    GC_FAST_MALLOC_GRANS(result, granules,
                         ((GC_tlfs)tsd) -> _freelists[kind], DIRECT_GRANULES,
                         kind, GC_malloc_kind_global(bytes, kind),
                         (void)(kind == PTRFREE ? NULL
                                               : (obj_link(result) = 0)));
#   ifdef LOG_ALLOCS
      GC_log_printf("GC_malloc_kind(%lu, %d) returned %p, recent GC #%lu\n",
                    (unsigned long)bytes, kind, result,
                    (unsigned long)GC_gc_no);
#   endif
=======
        return GC_core_malloc(bytes);
      }
#   endif
    GC_ASSERT(GC_is_initialized);

    GC_ASSERT(GC_is_thread_tsd_valid(tsd));

    tiny_fl = ((GC_tlfs)tsd) -> normal_freelists;
    GC_FAST_MALLOC_GRANS(result, granules, tiny_fl, DIRECT_GRANULES,
                         NORMAL, GC_core_malloc(bytes), obj_link(result)=0);
#   ifdef LOG_ALLOCS
      GC_log_printf("GC_malloc(%lu) returned %p, recent GC #%lu\n",
                    (unsigned long)bytes, result, (unsigned long)GC_gc_no);
#   endif
    return result;
}

GC_API void * GC_CALL GC_malloc_atomic(size_t bytes)
{
    size_t granules = ROUNDED_UP_GRANULES(bytes);
    void *tsd;
    void *result;
    void **tiny_fl;

#   if !defined(USE_PTHREAD_SPECIFIC) && !defined(USE_WIN32_SPECIFIC)
      GC_key_t k = GC_thread_key;
      if (EXPECT(0 == k, FALSE)) {
        /* We haven't yet run GC_init_parallel.  That means     */
        /* we also aren't locking, so this is fairly cheap.     */
        return GC_core_malloc_atomic(bytes);
      }
      tsd = GC_getspecific(k);
#   else
      tsd = GC_getspecific(GC_thread_key);
#   endif
#   if !defined(USE_COMPILER_TLS) && !defined(USE_WIN32_COMPILER_TLS)
      if (EXPECT(0 == tsd, FALSE)) {
        return GC_core_malloc_atomic(bytes);
      }
#   endif
    GC_ASSERT(GC_is_initialized);
    tiny_fl = ((GC_tlfs)tsd) -> ptrfree_freelists;
    GC_FAST_MALLOC_GRANS(result, granules, tiny_fl, DIRECT_GRANULES, PTRFREE,
                         GC_core_malloc_atomic(bytes), (void)0 /* no init */);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    return result;
}

#ifdef GC_GCJ_SUPPORT

<<<<<<< HEAD
# include "gc_gcj.h"
=======
# include "atomic_ops.h" /* for AO_compiler_barrier() */

# include "include/gc_gcj.h"
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

/* Gcj-style allocation without locks is extremely tricky.  The         */
/* fundamental issue is that we may end up marking a free list, which   */
/* has freelist links instead of "vtable" pointers.  That is usually    */
/* OK, since the next object on the free list will be cleared, and      */
/* will thus be interpreted as containing a zero descriptor.  That's    */
/* fine if the object has not yet been initialized.  But there are      */
/* interesting potential races.                                         */
/* In the case of incremental collection, this seems hopeless, since    */
/* the marker may run asynchronously, and may pick up the pointer to    */
/* the next freelist entry (which it thinks is a vtable pointer), get   */
/* suspended for a while, and then see an allocated object instead      */
/* of the vtable.  This may be avoidable with either a handshake with   */
/* the collector or, probably more easily, by moving the free list      */
/* links to the second word of each object.  The latter isn't a         */
/* universal win, since on architecture like Itanium, nonzero offsets   */
/* are not necessarily free.  And there may be cache fill order issues. */
/* For now, we punt with incremental GC.  This probably means that      */
/* incremental GC should be enabled before we fork a second thread.     */
/* Unlike the other thread local allocation calls, we assume that the   */
/* collector has been explicitly initialized.                           */
<<<<<<< HEAD
GC_API GC_ATTR_MALLOC void * GC_CALL GC_gcj_malloc(size_t bytes,
=======
GC_API void * GC_CALL GC_gcj_malloc(size_t bytes,
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
                                    void * ptr_to_struct_containing_descr)
{
  if (EXPECT(GC_incremental, FALSE)) {
    return GC_core_gcj_malloc(bytes, ptr_to_struct_containing_descr);
  } else {
    size_t granules = ROUNDED_UP_GRANULES(bytes);
    void *result;
<<<<<<< HEAD
    void **tiny_fl;

    GC_ASSERT(GC_gcj_malloc_initialized);
    tiny_fl = ((GC_tlfs)GC_getspecific(GC_thread_key))->gcj_freelists;
=======
    void **tiny_fl = ((GC_tlfs)GC_getspecific(GC_thread_key))
                                        -> gcj_freelists;
    GC_ASSERT(GC_gcj_malloc_initialized);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    GC_FAST_MALLOC_GRANS(result, granules, tiny_fl, DIRECT_GRANULES,
                         GC_gcj_kind,
                         GC_core_gcj_malloc(bytes,
                                            ptr_to_struct_containing_descr),
                         {AO_compiler_barrier();
                          *(void **)result = ptr_to_struct_containing_descr;});
        /* This forces the initialization of the "method ptr".          */
        /* This is necessary to ensure some very subtle properties      */
        /* required if a GC is run in the middle of such an allocation. */
        /* Here we implicitly also assume atomicity for the free list.  */
        /* and method pointer assignments.                              */
        /* We must update the freelist before we store the pointer.     */
        /* Otherwise a GC at this point would see a corrupted           */
        /* free list.                                                   */
        /* A real memory barrier is not needed, since the               */
        /* action of stopping this thread will cause prior writes       */
        /* to complete.                                                 */
        /* We assert that any concurrent marker will stop us.           */
        /* Thus it is impossible for a mark procedure to see the        */
        /* allocation of the next object, but to see this object        */
        /* still containing a free list pointer.  Otherwise the         */
        /* marker, by misinterpreting the freelist link as a vtable     */
        /* pointer, might find a random "mark descriptor" in the next   */
        /* object.                                                      */
    return result;
  }
}

#endif /* GC_GCJ_SUPPORT */

/* The thread support layer must arrange to mark thread-local   */
/* free lists explicitly, since the link field is often         */
/* invisible to the marker.  It knows how to find all threads;  */
/* we take care of an individual thread freelist structure.     */
GC_INNER void GC_mark_thread_local_fls_for(GC_tlfs p)
{
    ptr_t q;
<<<<<<< HEAD
    int i, j;

    for (j = 0; j < TINY_FREELISTS; ++j) {
      for (i = 0; i < THREAD_FREELISTS_KINDS; ++i) {
        /* Load the pointer atomically as it might be updated   */
        /* concurrently by GC_FAST_MALLOC_GRANS.                */
        q = (ptr_t)AO_load((volatile AO_t *)&p->_freelists[i][j]);
        if ((word)q > HBLKSIZE)
          GC_set_fl_marks(q);
      }
#     ifdef GC_GCJ_SUPPORT
        if (EXPECT(j > 0, TRUE)) {
          q = (ptr_t)AO_load((volatile AO_t *)&p->gcj_freelists[j]);
          if ((word)q > HBLKSIZE)
            GC_set_fl_marks(q);
        }
=======
    int j;

    for (j = 0; j < TINY_FREELISTS; ++j) {
      q = p -> ptrfree_freelists[j];
      if ((word)q > HBLKSIZE) GC_set_fl_marks(q);
      q = p -> normal_freelists[j];
      if ((word)q > HBLKSIZE) GC_set_fl_marks(q);
#     ifdef GC_GCJ_SUPPORT
        if (j > 0) {
          q = p -> gcj_freelists[j];
          if ((word)q > HBLKSIZE) GC_set_fl_marks(q);
        }
#     endif /* GC_GCJ_SUPPORT */
#     ifdef ENABLE_DISCLAIM
        q = p -> finalized_freelists[j];
        if ((word)q > HBLKSIZE)
          GC_set_fl_marks(q);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#     endif
    }
}

#if defined(GC_ASSERTIONS)
    /* Check that all thread-local free-lists in p are completely marked. */
    void GC_check_tls_for(GC_tlfs p)
    {
<<<<<<< HEAD
        int i, j;

        for (j = 1; j < TINY_FREELISTS; ++j) {
          for (i = 0; i < THREAD_FREELISTS_KINDS; ++i) {
            GC_check_fl_marks(&p->_freelists[i][j]);
          }
#         ifdef GC_GCJ_SUPPORT
            GC_check_fl_marks(&p->gcj_freelists[j]);
#         endif
=======
        int j;

        for (j = 1; j < TINY_FREELISTS; ++j) {
          GC_check_fl_marks(&p->ptrfree_freelists[j]);
          GC_check_fl_marks(&p->normal_freelists[j]);
#         ifdef GC_GCJ_SUPPORT
            GC_check_fl_marks(&p->gcj_freelists[j]);
#         endif
#         ifdef ENABLE_DISCLAIM
            GC_check_fl_marks(&p->finalized_freelists[j]);
#         endif
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        }
    }
#endif /* GC_ASSERTIONS */

#endif /* THREAD_LOCAL_ALLOC */

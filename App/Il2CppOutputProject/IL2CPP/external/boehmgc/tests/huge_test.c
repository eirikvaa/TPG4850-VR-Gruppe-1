
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

#ifndef GC_IGNORE_WARN
  /* Ignore misleading "Out of Memory!" warning (which is printed on    */
<<<<<<< HEAD
  /* every GC_MALLOC call below) by defining this macro before "gc.h"   */
  /* inclusion.                                                         */
# define GC_IGNORE_WARN
#endif

#ifndef GC_MAXIMUM_HEAP_SIZE
# define GC_MAXIMUM_HEAP_SIZE 100 * 1024 * 1024
# define GC_INITIAL_HEAP_SIZE GC_MAXIMUM_HEAP_SIZE / 20
    /* Otherwise heap expansion aborts when deallocating large block.   */
    /* That's OK.  We test this corner case mostly to make sure that    */
    /* it fails predictably.                                            */
#endif

#ifndef GC_ATTR_ALLOC_SIZE
  /* Omit alloc_size attribute to avoid compiler warnings about         */
  /* exceeding maximum object size when values close to GC_SWORD_MAX    */
  /* are passed to GC_MALLOC.                                           */
# define GC_ATTR_ALLOC_SIZE(argnum) /* empty */
#endif

=======
  /* every GC_MALLOC(LONG_MAX) call) by defining this macro before      */
  /* "gc.h" inclusion.                                                  */
# define GC_IGNORE_WARN
#endif

>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#include "gc.h"

/*
 * Check that very large allocation requests fail.  "Success" would usually
 * indicate that the size was somehow converted to a negative
 * number.  Clients shouldn't do this, but we should fail in the
 * expected manner.
 */

<<<<<<< HEAD
#define CHECK_ALLOC_FAILED(r, sz_str) \
  do { \
    if (NULL != (r)) { \
        fprintf(stderr, \
                "Size " sz_str " allocation unexpectedly succeeded\n"); \
        exit(1); \
    } \
  } while (0)

#define GC_WORD_MAX ((GC_word)-1)
#define GC_SWORD_MAX ((GC_signed_word)(GC_WORD_MAX >> 1))

=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
int main(void)
{
    GC_INIT();

<<<<<<< HEAD
    CHECK_ALLOC_FAILED(GC_MALLOC(GC_SWORD_MAX - 1024), "SWORD_MAX-1024");
    CHECK_ALLOC_FAILED(GC_MALLOC(GC_SWORD_MAX), "SWORD_MAX");
    CHECK_ALLOC_FAILED(GC_MALLOC((GC_word)GC_SWORD_MAX + 1), "SWORD_MAX+1");
    CHECK_ALLOC_FAILED(GC_MALLOC((GC_word)GC_SWORD_MAX + 1024),
                       "SWORD_MAX+1024");
    CHECK_ALLOC_FAILED(GC_MALLOC(GC_WORD_MAX - 1024), "WORD_MAX-1024");
    CHECK_ALLOC_FAILED(GC_MALLOC(GC_WORD_MAX - 16), "WORD_MAX-16");
    CHECK_ALLOC_FAILED(GC_MALLOC(GC_WORD_MAX - 8), "WORD_MAX-8");
    CHECK_ALLOC_FAILED(GC_MALLOC(GC_WORD_MAX - 4), "WORD_MAX-4");
    CHECK_ALLOC_FAILED(GC_MALLOC(GC_WORD_MAX), "WORD_MAX");
=======
    GC_set_max_heap_size(100*1024*1024);
        /* Otherwise heap expansion aborts when deallocating large block. */
        /* That's OK.  We test this corner case mostly to make sure that  */
        /* it fails predictably.                                          */
    GC_expand_hp(1024*1024*5);
    if (sizeof(long) == sizeof(void *)) {
        void *r = GC_MALLOC(LONG_MAX-1024);
        if (0 != r) {
            fprintf(stderr,
                    "Size LONG_MAX-1024 allocation unexpectedly succeeded\n");
            exit(1);
        }
        r = GC_MALLOC(LONG_MAX);
        if (0 != r) {
            fprintf(stderr,
                    "Size LONG_MAX allocation unexpectedly succeeded\n");
            exit(1);
        }
        r = GC_MALLOC((size_t)LONG_MAX + 1024);
        if (0 != r) {
            fprintf(stderr,
                    "Size LONG_MAX+1024 allocation unexpectedly succeeded\n");
            exit(1);
        }
    }
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    return 0;
}

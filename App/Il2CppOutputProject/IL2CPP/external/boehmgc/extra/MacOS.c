/*
        MacOS.c

        Some routines for the Macintosh OS port of the Hans-J. Boehm, Alan J. Demers
        garbage collector.

        <Revision History>

        11/22/94  pcb  StripAddress the temporary memory handle for 24-bit mode.
        11/30/94  pcb  Tracking all memory usage so we can deallocate it all at once.
        02/10/96  pcb  Added routine to perform a final collection when
unloading shared library.

        by Patrick C. Beard.
 */
/* Boehm, February 15, 1996 2:55 pm PST */

#include <Resources.h>
#include <Memory.h>
#include <LowMem.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GC_BUILD
#include "gc.h"
<<<<<<< HEAD
#include "private/gc_priv.h"

/* use 'CODE' resource 0 to get exact location of the beginning of global space. */
=======
#include "gc_priv.h"

// use 'CODE' resource 0 to get exact location of the beginning of global space.
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

typedef struct {
        unsigned long aboveA5;
        unsigned long belowA5;
        unsigned long JTSize;
        unsigned long JTOffset;
} *CodeZeroPtr, **CodeZeroHandle;

<<<<<<< HEAD
void* GC_MacGetDataStart(void)
=======
void* GC_MacGetDataStart()
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
        CodeZeroHandle code0 = (CodeZeroHandle)GetResource('CODE', 0);
        if (code0) {
                long belowA5Size = (**code0).belowA5;
                ReleaseResource((Handle)code0);
                return (LMGetCurrentA5() - belowA5Size);
        }
        fprintf(stderr, "Couldn't load the jump table.");
        exit(-1);
        return 0;
}

<<<<<<< HEAD
#ifdef USE_TEMPORARY_MEMORY

=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
/* track the use of temporary memory so it can be freed all at once. */

typedef struct TemporaryMemoryBlock TemporaryMemoryBlock, **TemporaryMemoryHandle;

struct TemporaryMemoryBlock {
        TemporaryMemoryHandle nextBlock;
        char data[];
};

static TemporaryMemoryHandle theTemporaryMemory = NULL;
<<<<<<< HEAD
=======
static Boolean firstTime = true;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

void GC_MacFreeTemporaryMemory(void);

Ptr GC_MacTemporaryNewPtr(size_t size, Boolean clearMemory)
{
<<<<<<< HEAD
#     if !defined(SHARED_LIBRARY_BUILD)
        static Boolean firstTime = true;
#     endif
=======
        static Boolean firstTime = true;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        OSErr result;
        TemporaryMemoryHandle tempMemBlock;
        Ptr tempPtr = nil;

        tempMemBlock = (TemporaryMemoryHandle)TempNewHandle(size + sizeof(TemporaryMemoryBlock), &result);
        if (tempMemBlock && result == noErr) {
                HLockHi((Handle)tempMemBlock);
                tempPtr = (**tempMemBlock).data;
                if (clearMemory) memset(tempPtr, 0, size);
                tempPtr = StripAddress(tempPtr);

<<<<<<< HEAD
                /* keep track of the allocated blocks. */
=======
                // keep track of the allocated blocks.
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
                (**tempMemBlock).nextBlock = theTemporaryMemory;
                theTemporaryMemory = tempMemBlock;
        }

#     if !defined(SHARED_LIBRARY_BUILD)
<<<<<<< HEAD
        /* install an exit routine to clean up the memory used at the end. */
=======
        // install an exit routine to clean up the memory used at the end.
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        if (firstTime) {
                atexit(&GC_MacFreeTemporaryMemory);
                firstTime = false;
        }
#     endif

        return tempPtr;
}

extern word GC_fo_entries;

<<<<<<< HEAD
static void perform_final_collection(void)
=======
static void perform_final_collection()
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
  unsigned i;
  word last_fo_entries = 0;

  /* adjust the stack bottom, because CFM calls us from another stack
     location. */
     GC_stackbottom = (ptr_t)&i;

  /* try to collect and finalize everything in sight */
    for (i = 0; i < 2 || GC_fo_entries < last_fo_entries; i++) {
        last_fo_entries = GC_fo_entries;
        GC_gcollect();
    }
}


<<<<<<< HEAD
void GC_MacFreeTemporaryMemory(void)
=======
void GC_MacFreeTemporaryMemory()
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
{
# if defined(SHARED_LIBRARY_BUILD)
    /* if possible, collect all memory, and invoke all finalizers. */
      perform_final_collection();
# endif

    if (theTemporaryMemory != NULL) {
<<<<<<< HEAD
#     if !defined(SHARED_LIBRARY_BUILD)
        long totalMemoryUsed = 0;
#     endif
        TemporaryMemoryHandle tempMemBlock = theTemporaryMemory;
        while (tempMemBlock != NULL) {
                TemporaryMemoryHandle nextBlock = (**tempMemBlock).nextBlock;
#             if !defined(SHARED_LIBRARY_BUILD)
                totalMemoryUsed += GetHandleSize((Handle)tempMemBlock);
#             endif
=======
        long totalMemoryUsed = 0;
        TemporaryMemoryHandle tempMemBlock = theTemporaryMemory;
        while (tempMemBlock != NULL) {
                TemporaryMemoryHandle nextBlock = (**tempMemBlock).nextBlock;
                totalMemoryUsed += GetHandleSize((Handle)tempMemBlock);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
                DisposeHandle((Handle)tempMemBlock);
                tempMemBlock = nextBlock;
        }
        theTemporaryMemory = NULL;

#       if !defined(SHARED_LIBRARY_BUILD)
          if (GC_print_stats) {
            fprintf(stdout, "[total memory used:  %ld bytes.]\n",
<<<<<<< HEAD
                    totalMemoryUsed);
            fprintf(stdout, "[total collections: %lu]\n",
                    (unsigned long)GC_gc_no);
=======
                  totalMemoryUsed);
            fprintf(stdout, "[total collections:  %ld.]\n", GC_gc_no);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
          }
#       endif
    }
}

<<<<<<< HEAD
#endif /* USE_TEMPORARY_MEMORY */

#if __option(far_data)

  void* GC_MacGetDataEnd(void)
=======
#if __option(far_data)

  void* GC_MacGetDataEnd()
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
  {
        CodeZeroHandle code0 = (CodeZeroHandle)GetResource('CODE', 0);
        if (code0) {
                long aboveA5Size = (**code0).aboveA5;
                ReleaseResource((Handle)code0);
                return (LMGetCurrentA5() + aboveA5Size);
        }
        fprintf(stderr, "Couldn't load the jump table.");
        exit(-1);
        return 0;
  }

#endif /* __option(far_data) */

/*
 * Copyright (c) 1994 by Xerox Corporation.  All rights reserved.
 * Copyright (c) 1996 by Silicon Graphics.  All rights reserved.
 * Copyright (c) 1998 by Fergus Henderson.  All rights reserved.
 * Copyright (c) 2000-2009 by Hewlett-Packard Development Company.
 * All rights reserved.
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

#ifndef GC_H
# include "gc.h"
#endif

#ifdef __cplusplus
  extern "C" {
#endif

/*
 * Invoke all remaining finalizers that haven't yet been run.  (Since the
 * notifier is not called, this should be called from a separate thread.)
 * This function is needed for strict compliance with the Java standard,
 * which can make the runtime guarantee that all finalizers are run.
 * This is problematic for several reasons:
 * 1) It means that finalizers, and all methods called by them,
 *    must be prepared to deal with objects that have been finalized in
 *    spite of the fact that they are still referenced by statically
 *    allocated pointer variables.
<<<<<<< HEAD
 * 2) It may mean that we get stuck in an infinite loop running
=======
 * 1) It may mean that we get stuck in an infinite loop running
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
 *    finalizers which create new finalizable objects, though that's
 *    probably unlikely.
 * Thus this is not recommended for general use.
 */
GC_API void GC_CALL GC_finalize_all(void);

<<<<<<< HEAD
#ifdef GC_THREADS
  /* External thread suspension support.  No thread suspension count    */
  /* (so a thread which has been suspended numerous times will be       */
  /* resumed with the very first call to GC_resume_thread).             */
  /* Acquire the allocation lock.  Thread should be registered in GC    */
  /* (otherwise no-op, GC_is_thread_suspended returns false).           */
  /* Unimplemented on some platforms.  Not recommended for general use. */
# ifndef GC_SUSPEND_THREAD_ID
#   define GC_SUSPEND_THREAD_ID void*
# endif
  GC_API void GC_CALL GC_suspend_thread(GC_SUSPEND_THREAD_ID);
  GC_API void GC_CALL GC_resume_thread(GC_SUSPEND_THREAD_ID);
  GC_API int GC_CALL GC_is_thread_suspended(GC_SUSPEND_THREAD_ID);
#endif /* GC_THREADS */

#ifdef __cplusplus
  } /* extern "C" */
=======
#ifdef __cplusplus
  } /* end of extern "C" */
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#endif

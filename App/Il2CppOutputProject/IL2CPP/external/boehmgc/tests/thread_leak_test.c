
#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#ifndef GC_THREADS
# define GC_THREADS
#endif

<<<<<<< HEAD
#undef GC_NO_THREAD_REDIRECTS
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#include "leak_detector.h"

#ifdef GC_PTHREADS
# include <pthread.h>
#else
# include <windows.h>
#endif

#include <stdio.h>

#ifdef GC_PTHREADS
  void * test(void * arg)
#else
  DWORD WINAPI test(LPVOID arg)
#endif
{
    int *p[10];
    int i;
    for (i = 0; i < 10; ++i) {
<<<<<<< HEAD
        p[i] = (int *)malloc(sizeof(int) + i);
=======
        p[i] = malloc(sizeof(int)+i);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    }
    CHECK_LEAKS();
    for (i = 1; i < 10; ++i) {
        free(p[i]);
    }
#   ifdef GC_PTHREADS
      return arg;
#   else
      return (DWORD)(GC_word)arg;
#   endif
}

<<<<<<< HEAD
#ifndef NTHREADS
# define NTHREADS 5
#endif

int main(void) {
# if NTHREADS > 0
=======
#define NTHREADS 5

int main(void) {
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    int i;
#   ifdef GC_PTHREADS
      pthread_t t[NTHREADS];
#   else
      HANDLE t[NTHREADS];
      DWORD thread_id;
#   endif
    int code;
<<<<<<< HEAD
# endif
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

    GC_set_find_leak(1); /* for new collect versions not compiled       */
                         /* with -DFIND_LEAK.                           */
    GC_INIT();

<<<<<<< HEAD
# if NTHREADS > 0
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    for (i = 0; i < NTHREADS; ++i) {
#       ifdef GC_PTHREADS
          code = pthread_create(t + i, 0, test, 0);
#       else
          t[i] = CreateThread(NULL, 0, test, 0, 0, &thread_id);
          code = t[i] != NULL ? 0 : (int)GetLastError();
#       endif
        if (code != 0) {
            fprintf(stderr, "Thread creation failed %d\n", code);
            exit(2);
        }
    }

    for (i = 0; i < NTHREADS; ++i) {
#       ifdef GC_PTHREADS
          code = pthread_join(t[i], 0);
#       else
          code = WaitForSingleObject(t[i], INFINITE) == WAIT_OBJECT_0 ? 0 :
                                                        (int)GetLastError();
#       endif
        if (code != 0) {
            fprintf(stderr, "Thread join failed %d\n", code);
            exit(2);
        }
    }
<<<<<<< HEAD
# endif
=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

    CHECK_LEAKS();
    CHECK_LEAKS();
    CHECK_LEAKS();
    return 0;
}

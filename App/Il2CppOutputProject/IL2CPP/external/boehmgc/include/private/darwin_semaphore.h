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

#ifndef GC_DARWIN_SEMAPHORE_H
#define GC_DARWIN_SEMAPHORE_H

#if !defined(GC_DARWIN_THREADS)
# error darwin_semaphore.h included with GC_DARWIN_THREADS not defined
#endif

<<<<<<< HEAD
#ifdef __cplusplus
  extern "C" {
#endif

=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
/* This is a very simple semaphore implementation for Darwin.  It is    */
/* implemented in terms of pthread calls so it is not async signal      */
/* safe.  But this is not a problem because signals are not used to     */
/* suspend threads on Darwin.                                           */

typedef struct {
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    int value;
} sem_t;

GC_INLINE int sem_init(sem_t *sem, int pshared, int value) {
<<<<<<< HEAD
    if (pshared != 0) {
        errno = EPERM; /* unsupported */
        return -1;
    }
    sem->value = value;
    if (pthread_mutex_init(&sem->mutex, NULL) != 0)
      return -1;
    if (pthread_cond_init(&sem->cond, NULL) != 0) {
      (void)pthread_mutex_destroy(&sem->mutex);
      return -1;
    }
=======
    int ret;
    if(pshared)
        ABORT("sem_init with pshared set");
    sem->value = value;

    ret = pthread_mutex_init(&sem->mutex,NULL);
    if(ret < 0) return -1;
    ret = pthread_cond_init(&sem->cond,NULL);
    if(ret < 0) return -1;
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    return 0;
}

GC_INLINE int sem_post(sem_t *sem) {
<<<<<<< HEAD
    if (pthread_mutex_lock(&sem->mutex) != 0)
      return -1;
    sem->value++;
    if (pthread_cond_signal(&sem->cond) != 0) {
      (void)pthread_mutex_unlock(&sem->mutex);
      return -1;
    }
    return pthread_mutex_unlock(&sem->mutex) != 0 ? -1 : 0;
}

GC_INLINE int sem_wait(sem_t *sem) {
    if (pthread_mutex_lock(&sem->mutex) != 0)
      return -1;
    while (sem->value == 0) {
        if (pthread_cond_wait(&sem->cond, &sem->mutex) != 0) {
            (void)pthread_mutex_unlock(&sem->mutex);
            return -1;
        }
    }
    sem->value--;
    return pthread_mutex_unlock(&sem->mutex) != 0 ? -1 : 0;
}

GC_INLINE int sem_destroy(sem_t *sem) {
    return pthread_cond_destroy(&sem->cond) != 0
           || pthread_mutex_destroy(&sem->mutex) != 0 ? -1 : 0;
}

#ifdef __cplusplus
  } /* extern "C" */
#endif

=======
    if(pthread_mutex_lock(&sem->mutex) < 0)
        return -1;
    sem->value++;
    if(pthread_cond_signal(&sem->cond) < 0) {
        pthread_mutex_unlock(&sem->mutex);
        return -1;
    }
    if(pthread_mutex_unlock(&sem->mutex) < 0)
        return -1;
    return 0;
}

GC_INLINE int sem_wait(sem_t *sem) {
    if(pthread_mutex_lock(&sem->mutex) < 0)
        return -1;
    while(sem->value == 0) {
        pthread_cond_wait(&sem->cond,&sem->mutex);
    }
    sem->value--;
    if(pthread_mutex_unlock(&sem->mutex) < 0)
        return -1;
    return 0;
}

GC_INLINE int sem_destroy(sem_t *sem) {
    int ret;
    ret = pthread_cond_destroy(&sem->cond);
    if(ret < 0) return -1;
    ret = pthread_mutex_destroy(&sem->mutex);
    if(ret < 0) return -1;
    return 0;
}

>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
#endif

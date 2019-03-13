#include "leak_detector.h"

int main(void) {
    int *p[10];
    int i;
    GC_set_find_leak(1); /* for new collect versions not compiled       */
                         /* with -DFIND_LEAK.                           */

    GC_INIT();  /* Needed if thread-local allocation is enabled.        */
                /* FIXME: This is not ideal.                            */
    for (i = 0; i < 10; ++i) {
<<<<<<< HEAD
        p[i] = (int*)malloc(sizeof(int)+i);
=======
        p[i] = malloc(sizeof(int)+i);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    }
    CHECK_LEAKS();
    for (i = 1; i < 10; ++i) {
        free(p[i]);
    }
    for (i = 0; i < 9; ++i) {
<<<<<<< HEAD
        p[i] = (int*)malloc(sizeof(int)+i);
=======
        p[i] = malloc(sizeof(int)+i);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    }
    CHECK_LEAKS();
    CHECK_LEAKS();
    CHECK_LEAKS();
    return 0;
}

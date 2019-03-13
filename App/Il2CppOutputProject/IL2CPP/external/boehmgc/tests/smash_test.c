/*
 * Test that overwrite error detection works reasonably.
 */
#define GC_DEBUG
#include "gc.h"

#include <stdio.h>

#define COUNT 7000
#define SIZE  40

char * A[COUNT];

int main(void)
{
  int i;
  char *p;

  GC_INIT();

  for (i = 0; i < COUNT; ++i) {
<<<<<<< HEAD
     A[i] = p = (char*)GC_MALLOC(SIZE);
=======
     A[i] = p = GC_MALLOC(SIZE);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

     if (i%3000 == 0) GC_gcollect();
     if (i%5678 == 0 && p != 0) p[SIZE + i/2000] = 42;
  }
  return 0;
}

/* Conditionally execute a command based on machine and OS from gcconfig.h */

# include "private/gc_priv.h"
# include <stdio.h>
# include <string.h>
# include <unistd.h>

<<<<<<< HEAD
#ifdef __cplusplus
# define EXECV_ARGV_T char**
#else
  /* The 2nd argument of execvp() prototype may be either char**, or    */
  /* char* const*, or const char* const*.                               */
# define EXECV_ARGV_T void*
#endif

=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
int main(int argc, char **argv)
{
    if (argc < 4) goto Usage;
    if (strcmp(MACH_TYPE, argv[1]) != 0) return(0);
<<<<<<< HEAD
    if (strlen(OS_TYPE) > 0 && strlen(argv[2]) > 0
        && strcmp(OS_TYPE, argv[2]) != 0) return(0);
    fprintf(stderr, "^^^^Starting command^^^^\n");
    fflush(stdout);
    execvp(TRUSTED_STRING(argv[3]), (EXECV_ARGV_T)(argv + 3));
=======
    if (strcmp(OS_TYPE, "") != 0 && strcmp(argv[2], "") != 0
        && strcmp(OS_TYPE, argv[2]) != 0) return(0);
    fprintf(stderr, "^^^^Starting command^^^^\n");
    fflush(stdout);
    execvp(argv[3], argv+3);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    perror("Couldn't execute");

Usage:
    fprintf(stderr, "Usage: %s mach_type os_type command\n", argv[0]);
    fprintf(stderr, "Currently mach_type = %s, os_type = %s\n",
            MACH_TYPE, OS_TYPE);
    return(1);
}

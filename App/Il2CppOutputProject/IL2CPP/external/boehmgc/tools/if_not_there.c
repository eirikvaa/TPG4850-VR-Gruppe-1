<<<<<<< HEAD
/* Conditionally execute the command argv[2] based if the file argv[1]  */
/* does not exist.  If the command is omitted (and the file does not    */
/* exist) then just exit with a non-zero code.                          */
=======
/* Conditionally execute a command based if the file argv[1] doesn't exist */
/* Except for execvp, we stick to ANSI C.                                  */
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa

# include "private/gc_priv.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#ifdef __DJGPP__
#include <dirent.h>
#endif /* __DJGPP__ */

<<<<<<< HEAD
#ifdef __cplusplus
# define EXECV_ARGV_T char**
#else
# define EXECV_ARGV_T void* /* see the comment in if_mach.c */
#endif

=======
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
int main(int argc, char **argv)
{
    FILE * f;
#ifdef __DJGPP__
    DIR * d;
#endif /* __DJGPP__ */
<<<<<<< HEAD
    char *fname;

    if (argc < 2 || argc > 3)
        goto Usage;

    fname = TRUSTED_STRING(argv[1]);
    f = fopen(fname, "rb");
    if (f != NULL) {
        fclose(f);
        return(0);
    }
    f = fopen(fname, "r");
    if (f != NULL) {
=======
    if (argc < 3) goto Usage;
    if ((f = fopen(argv[1], "rb")) != 0
        || (f = fopen(argv[1], "r")) != 0) {
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
        fclose(f);
        return(0);
    }
#ifdef __DJGPP__
<<<<<<< HEAD
    if ((d = opendir(fname)) != 0) {
=======
    if ((d = opendir(argv[1])) != 0) {
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
            closedir(d);
            return(0);
    }
#endif
    printf("^^^^Starting command^^^^\n");
    fflush(stdout);
<<<<<<< HEAD
    if (argc == 2)
        return(2); /* the file does not exist but no command is given */

    execvp(TRUSTED_STRING(argv[2]), (EXECV_ARGV_T)(argv + 2));
    exit(1);

Usage:
    fprintf(stderr, "Usage: %s file_name [command]\n", argv[0]);
=======
    execvp(argv[2], argv+2);
    exit(1);

Usage:
    fprintf(stderr, "Usage: %s file_name command\n", argv[0]);
>>>>>>> d22b281df45436acc97ea9eef7af086557c838aa
    return(1);
}

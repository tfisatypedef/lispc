#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <histedit.h>

/* Declare a buffer for user input of size 2048 */
/* static char input[2048]; */

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

   /* In a never ending loop */
  while (1) {

    /* Output our prompt and get input */
    char* input = readline("lispy> ");

    /* Add input to history */
    add_history(input);

    
    /* Output our prompt */
    /*    fputs("lispy> ", stdout); */

    /* Read a line of user input of maximum size 2048 */
    /* fgets(input, 2048, stdin); */

    /* Echo input back to user */
    printf("No you're a %s\n", input);

    /* Free retrieved input */
    free(input);

  }

  return 0;

}

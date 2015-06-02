#include <stdio.h>

//user input buffer
static char input[2048];

int main(int argc, char **argv) {
  puts("Lispy Version 0.0.0.1");
  puts("Press ctrl-c to exit");

  while (1) {
    fputs("lispy> ", stdout);

    fgets(input, 2048, stdin);

    printf("You, you're a %s", input);
  }
  return 0;
}

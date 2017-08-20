#include <stdio.h>

/* copy input to output */
// getchar: read a character at a time from a text stream
// putchar: print a character
int main() {
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
  return 0;
}

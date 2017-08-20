#include      <stdio.h>

/* Exercise 1-09: Output a single blank */
int main() {
  char c,      c2 = -1;

  while ((c    =   getchar()) != EOF) {
    if (c != ' '   || c2 != ' ')
      putchar(c2);
    c2 =      c;
  }
  putchar(       c2);
  return          0;
}

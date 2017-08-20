#include <stdio.h>

/* Exercise 1-12: Print one word per line */
int main() {
  char c, c2 = -1;

  while ((c = getchar()) != EOF) {
    if ((c != ' ' && c != '\n' && c != '\t') || (c2 != ' ' && c2 != '\n' && c2 != '\t'))
      if (c2 == ' ' || c2 == '\n' || c2 == '\t')
        putchar('\n');
      else
        putchar(c2);
    c2 = c;
  }
  putchar(c2);
  return 0;
}

#include <stdio.h>

/* Exercise 1-08: Count blanks, tabs, and newlines */
int main() {
  int c, nb = 0, nt = 0, nl = 0;

  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;
  printf("blanks: %d\ntabs: %d\nlines: %d\n", nb, nt, nl);
  return 0;
}

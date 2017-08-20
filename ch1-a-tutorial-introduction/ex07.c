#include <stdio.h>

/* Exercise 1-07: Print the value of EOF */
int main() {
  int c;

  while ((c = getchar()) != EOF)
    ;
  printf("The value of EOF is %d\n", c);
  return 0;
}

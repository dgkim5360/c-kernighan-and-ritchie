#include <stdio.h>

int lower(int c);

int main(int argc, char *argv[]) {
  char c, *word;

  while (--argc > 0 && (word = *(++argv))) {
    while ((c = *(word++)) != '\0')
      putchar(lower(c));
    printf(" ");
  }
  printf("\n");
  return 0;
}

// Exercise 2-10: Lower with conditional expressions
int lower(int c) {
  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

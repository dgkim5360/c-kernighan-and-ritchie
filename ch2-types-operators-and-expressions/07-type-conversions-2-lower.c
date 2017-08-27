#include <stdio.h>

int lower(int c);

// take summation
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

/* lower: convert c to lower case; ASCII only (tolower in ctype.h)*/
int lower(int c) {
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
}

#include <stdio.h>

int str_len(char *);

int main(int argc, char *argv[]) {
  while (--argc > 0)
    printf((argc > 1) ? "%d " : "%d\n", str_len(*(++argv)));
  return 0;
}

/* str_len: return length of string s */
int str_len(char *s) {
  int n;

  for (n = 0; *s != '\0'; s++)
    n++;
  return n;
}

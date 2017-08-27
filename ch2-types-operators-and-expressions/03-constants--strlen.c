#include <stdio.h>

int str_len(char s[]);

int main(int argc, char *argv[]) {
  while (--argc > 0)
    printf((argc > 1) ? "%d " : "%d\n", str_len(*(++argv)));
  return 0;
}

/* str_len: return length of s (string.h) */
int str_len(char s[]) {
  int i = 0;

  // while (s[i] != '\0')
  //   ++i;
  while (s[i++] != '\0')
    ;
  return i;
}

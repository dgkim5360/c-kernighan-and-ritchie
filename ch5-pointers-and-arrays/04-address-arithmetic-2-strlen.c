#include <stdio.h>

int str_len(char *);

int main(int argc, char *argv[]) {
  while (--argc > 0)
    printf((argc > 1) ? "%d " : "%d\n", str_len(*(++argv)));
  return 0;
}

/* another version */
int str_len(char *s) {
  char *p = s;

  while (*p != '\0')
    p++;
  return p - s;
}

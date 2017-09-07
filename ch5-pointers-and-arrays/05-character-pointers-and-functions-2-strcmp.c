#include<stdio.h>

int strcmp(char *, char *);

int main(int argc, char *argv[]) {
  int cmp;
  if (argc == 3) {
    cmp = strcmp(argv[1], argv[2]);
    if (cmp > 0)
      printf("%s > %s\n", argv[1], argv[2]);
    else if (cmp < 0)
      printf("%s < %s\n", argv[1], argv[2]);
    else
      printf("%s = %s\n", argv[1], argv[2]);
  }
  else
    printf("Please insert two words\n");
  return 0;
}

/* strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
// int strcmp(char *s, char *t) {
//   int i;
//
//   for (i = 0; s[i] == t[i]; i++)
//     if (s[i] == '\0')
//       return 0
//   return s[i] - t[i];
// }

/* strcmp: pointer version (string.h) */
int strcmp(char *s, char *t) {
  for ( ; *s == *t; s++, t++)
    if (*s == '\0')
      return 0;
  return *s - *t;
}

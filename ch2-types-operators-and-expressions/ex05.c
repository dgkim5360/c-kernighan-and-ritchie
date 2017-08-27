#include <stdio.h>

int any(char s1[], char s2[]);

int main(int argc, char *argv[]) {
  if (argc == 3) {
    char *word = *(++argv);
    printf("%d\n", any(word, *(++argv)));
  }
  return 0;
}

/* Exercise 2-05: any(s1, s2) */
int any(char s1[], char s2[]) {
  register int i, j;
  register char flag;
  char *s2cpy = s2;

  for (i = j = 0; s1[i] != '\0'; i++, flag = 1)
    for (s2cpy = s2; *s2cpy != '\0'; s2cpy++)
      if (s1[i] == *s2cpy) {
        return i;
      }
  return -1;
}

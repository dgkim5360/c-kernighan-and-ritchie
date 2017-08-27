#include <stdio.h>

void squeeze_any(char s1[], char s2[]);

int main(int argc, char *argv[]) {
  if (argc == 3) {
    char *word = *(++argv);
    squeeze_any(word, *(++argv));
    printf("%s\n", word);
  }
  return 0;
}

/* Exercise 2-04: Alternate version of squeeze(s1, s2) */
void squeeze_any(char s1[], char s2[]) {
  register int i, j;
  register char flag;
  char *s2cpy = s2;

  for (i = j = 0; s1[i] != '\0'; i++, flag = 1) {
    for (s2cpy = s2; *s2cpy != '\0'; s2cpy++)
      if (s1[i] == *s2cpy) {
        flag = 0;
        break;
      }
    if (flag)
      s1[j++] = s1[i];
  }
  s1[j] = '\0';
}

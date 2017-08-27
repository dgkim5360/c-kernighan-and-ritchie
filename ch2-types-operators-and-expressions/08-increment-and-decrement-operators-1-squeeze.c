#include <stdio.h>

void squeeze(char s[], int c);

int main(int argc, char *argv[]) {
  if (argc == 3) {
    char *word = *(++argv);
    squeeze(word, **(++argv));
    printf("%s\n", word);
  }
  return 0;
}

/* squeeze: delete all c from s */
void squeeze(char s[], int c) {
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

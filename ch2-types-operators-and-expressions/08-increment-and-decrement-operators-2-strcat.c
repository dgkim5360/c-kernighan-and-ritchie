#include <stdio.h>
#define MAXLEN 500

void str_cat(char s[], char t[]);

int main(int argc, char *argv[]) {
  char word[MAXLEN] = "";

  while (--argc > 0)
    str_cat(word, *(++argv));
  printf("%s\n", word);
  return 0;
}

/* str_cat: concatenate t to end of s; s must be big enough */
void str_cat(char s[], char t[]) {
  int i, j;

  i = j = 0;
  while (s[i] != '\0')  // find end of s
    i++;
  while ((s[i++] = t[j++]) != '\0')  // copy t
    ;
}

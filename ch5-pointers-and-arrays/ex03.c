#include <stdio.h>
#define MAXLEN 500

void str_cat(char *, char *);

int main(int argc, char *argv[]) {
  char word[MAXLEN] = "";

  while (--argc > 0)
    str_cat(word, *(++argv));
  printf("%s\n", word);
  return 0;
}

/* Exercise 5-03: A pointer version of strcat(s,t) */
void str_cat(char *s, char *t) {
  while (*(s++) != '\0')  // find end of s
    t++;
  while ((*(s++) = *(t++)) != '\0')  // copy t
    ;
}

#include<stdio.h>
#include<string.h>

int strend(char *, char *);

int main(int argc, char *argv[]) {
  int matched;
  if (argc == 3) {
    matched = strend(argv[1], argv[2]);
    if (matched > 0)
      printf("%s ends with %s\n", argv[1], argv[2]);
    else if (matched == 0)
      printf("%s does not end with %s\n", argv[1], argv[2]);
  }
  else
    printf("Please insert two words\n");
  return 0;
}

/* Exercise 5-04: strend(s,t) check if s ends as t (return 1) */
int strend(char *s, char *t) {
  const int slen = strlen(s), tlen = strlen(t);
  char *p;

  if (slen < tlen) {
    printf("LogicalError: s should be longer than t.\n");
    return -1;
  }

  p = t;
  for (; *s != '\0'; s++);
  for (; *t != '\0'; t++);
  for (; *s == *t; s--, t--)
    if (t == p)
      return 1;
  return 0;
}

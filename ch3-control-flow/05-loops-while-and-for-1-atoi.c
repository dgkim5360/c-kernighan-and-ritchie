#include <stdio.h>
#include <ctype.h>

int atoi(char s[]);

// take summation
int main(int argc, char *argv[]) {
  int sum = 0;

  while (--argc > 0) {
    sum += atoi(*(++argv));
    printf((argc > 1) ? "%d + " : "%d = ", atoi(*argv));
  }
  printf("%d\n", sum);
  return 0;
}

/* atoi: convert s to integer; version 2 (improved from 20700atoi.c) */
// strtol in string.h
int atoi(char s[]) {
  int i, n, sign;

  for (i = 0; isspace(s[i]); i++)  // skip white space
    ;
  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')  // skip sign
    i++;
  for (n = 0; isdigit(s[i]); i++)
    n = 10*n + (s[i] - '0');
  return sign*n;
}

#include <stdio.h>

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

/* atoi: convert s to integer */
int atoi(char s[]) {
  int i, n = 0;

  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10*n + (s[i] - '0');
  return n;
}

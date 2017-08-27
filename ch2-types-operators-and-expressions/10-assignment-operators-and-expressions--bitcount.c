#include <stdio.h>

int bitcount(unsigned x);

int main(int argc, char *argv[]) {
  int i, atoi(char s[]);

  while (--argc > 0) {
    i = atoi(*(++argv));
    printf("%d has %d bits on\n", i, bitcount(i));
  }
}

// bitcount: count 1 bits in x
int bitcount(unsigned x) {
  int b;

  for (b = 0; x != 0; x >>= 1)
    if (x & 01)
      b++;
  return b;
}

/* atoi: convert s to integer */
int atoi(char s[]) {
  int i, n = 0;

  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10*n + (s[i] - '0');
  return n;
}

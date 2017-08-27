#include <stdio.h>
#define BIT 8

unsigned rightrot(unsigned, int);

int main() {
  /**
  x = 01001100 = 76, n = 3
  rightrot(x, n) = 100 ...01001
  */
  printf("%d, %d\n", 76, rightrot(76, 3));
  return 0;
}

// Exercise 2-08: Rotate x to right
unsigned rightrot(unsigned x, int n) {
  unsigned righttail, getbits(unsigned, int, int);

  righttail = getbits(x, n - 1, n) << (sizeof(int)*8 - n - 1);
  return (x >> n) | righttail;
}

// getbits: get n bits from position p
unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

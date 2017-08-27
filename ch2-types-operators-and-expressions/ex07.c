#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main() {
  /**
  x = 01001100 = 76, p = 4, n = 3
  setbits(x, p, n, y) = 01010000 = 80
  x = 01001100 = 76, p = 2, n = 2
  setbits(x, p, n, y) = 01001010 = 74
  */
  printf("%d, %d\n", 76, invert(76, 4, 3));
  return 0;
}

// Exercise 2-07: Invert x's n bits starting at position p
unsigned invert(unsigned x, int p, int n) {
  unsigned mask, getbits(unsigned, int, int);

  mask = getbits(~0, p, n) << (p + 1 - n);
  return (x & ~mask) | ((~getbits(x, p, n) << (p + 1 - n)) & mask);
}

// getbits: get n bits from position p
unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

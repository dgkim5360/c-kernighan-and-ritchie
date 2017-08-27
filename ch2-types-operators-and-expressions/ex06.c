#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main() {
  /**
  x = 01000000, p = 5, n = 3, y = 00000100
  setbits(x, p, n, y) = 01100000 = 96

  x = 01000000, p = 2, n = 3, y = 00000100
  setbits(x, p, n, y) = 01000100 = 72
  */
  printf("%d, %d\n", 0100, setbits(0100, 5, 3, 4));
  return 0;
}

// Exercise 2-06: Replace x's n bits starting at position p with y's first n digits
unsigned setbits(unsigned x, int p, int n, unsigned y) {
  unsigned mask, getbits(unsigned, int, int);

  mask = getbits(~0, p, n);
  return (x & ~mask) | (getbits(y, n - 1, n) << (p + 1 - n));
}

// getbits: get n bits from position p
unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

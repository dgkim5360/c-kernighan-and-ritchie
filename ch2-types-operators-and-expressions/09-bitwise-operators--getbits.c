#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main() {
  /**
  x = 00111111, p = 2, n = 2
  x >> (p+1-n) = x >> 1 = 00011111
  ~(~0 << n) = ~(11111111 << 2) = ~(11111100) = 00000011
  (x >> (p + 1 - n)) & ~(~0 << n) = 00011111 & 00000011 = 00000011
  */
  printf("%d, %d\n", 077, getbits(077, 2, 2));
  return 0;
}

// getbits: get n bits from position p (starting with 0)
unsigned getbits(unsigned x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

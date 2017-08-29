#include <stdio.h>

void printd(int n);

int main() {
  const int n = 325252;
  printd(n);
  printf("\n");
}

/* printd: print n in decimal */
void printd(int n) {
  if (n < 0) {
    putchar('-');
    n = -n;
  }
  if (n/10)
    printd(n/10);
  putchar(n%10 + '0');
}

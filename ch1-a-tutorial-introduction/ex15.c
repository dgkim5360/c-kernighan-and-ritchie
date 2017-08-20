#include <stdio.h>

/* Exercise 1-15: Use a function */
float fahr2cel(float);

int main() {
  int fahr;

  for (fahr = 0; fahr <= 300; fahr += 20)
    printf("%3d %6.1f\n", fahr, fahr2cel(fahr));
  return 0;
}

float fahr2cel(float fahr) {
  return (5.0/9.0)*(fahr - 32.0);
}

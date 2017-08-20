#include <stdio.h>

/* Exercise 1-03. Add a header */

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("%4s %7s\n", "fahr", "celsius");
  while (fahr <= upper) {
    celsius = (5.0/9.0)*(fahr - 32.0);
    printf("%4.0f %7.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}

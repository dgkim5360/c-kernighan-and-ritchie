#include <stdio.h>

/* Exercise 1-04. Reverse conversion */

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("%7s %4s\n", "celsius", "fahr");
  while (celsius <= upper) {
    fahr = celsius*9.0/5.0 + 32.0;
    printf("%7.0f %4.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}

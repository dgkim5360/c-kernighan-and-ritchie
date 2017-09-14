#include <stdio.h>
#include <stdarg.h>

int main() {
  void minprintf(char *fmt, ...);

  minprintf("%s\n", "Checking minprintf is working ...");
  minprintf("1. printing digits %d\n", 545);
  minprintf("2. printing floats %f\n", 3.6563);
  minprintf("3. printing string %s\n", "hello, output");
  minprintf("%s\n", "Done.");
  return 0;
}

// minprintf: minimal printf with variable argument list
void minprintf(char *fmt, ...) {
  va_list ap;  // points to each unnamed arg in turn
  char *p, *sval;
  int ival;
  double dval;

  va_start(ap, fmt);  // make ap point to 1st unnamed arg
  for (p = fmt; *p; p++) {
    if (*p != '%') {
      putchar(*p);
      continue;
    }
    switch (*++p) {
      case 'd':
        ival = va_arg(ap, int);
        printf("%d", ival);
        break;
      case 'f':
        dval = va_arg(ap, double);
        printf("%f", dval);
        break;
      case 's':
        for (sval = va_arg(ap, char *); *sval; sval++)
          putchar(*sval);
        break;
      default:
        putchar(*p);
        break;
    }
  }
  va_end(ap);  // clean up when done
}

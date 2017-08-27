#include <stdio.h>
#include <ctype.h>

// Exercise 2-03: htoi(s),converting a string of hexadecimal digits into integer
int htoi(char s[]);

int main() {
  printf("%d\n", htoi("1a34d"));
  return 0;
}

int htoi(char s[]) {
  int i = 0, n = 0, temp;

  if (s[i] == '0') {
    i++;
    if (s[i] == 'x' || s[i] == 'X')
      i++;
  }
  while ((temp = s[i++]) != '\0') {
    if (isdigit(temp))
      temp -= '0';
    else if (temp >= 'a' && temp <= 'f')
      temp -= 'a' - 10;
    else if (temp >= 'A' && temp <= 'F')
      temp -= 'A' - 10;
    else
      break;
    n = 16*n + temp;
  }
  return n;
}

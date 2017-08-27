#include <stdio.h>
#define STRINGSIZE 500

void escape(char s[], char t[]);

int main() {
  char s[] = "hello,\tthis is a\nsample\ttext!", scpy[STRINGSIZE];

  escape(scpy, s);
  printf("%s\n%s\n", s, scpy);
  return 0;
}

// Exercise 3-02: escape(s, t) (t to s)
void escape(char s[], char t[]) {
  register char c;
  while((c = *(t++)) != '\0') {
    switch (c) {
      case '\n':
        *(s++) = '\\';
        *(s++) = 'n';
        break;
      case '\t':
        *(s++) = '\\';
        *(s++) = 't';
        break;
      default:
        *(s++) = c;
        break;
    }
  }
  *s = '\0';
}

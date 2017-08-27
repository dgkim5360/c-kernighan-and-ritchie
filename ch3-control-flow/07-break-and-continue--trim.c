#include <stdio.h>
#include <string.h>
#define ARRAYSIZE 500

int trim(char s[]);
void escape(char s[], char t[]);

int main() {
  char s[] = "please delete my tail\t\n  \t\t\n", t[ARRAYSIZE];

  escape(t, s);
  printf("%s\n", t);
  trim(s);
  escape(t, s);
  printf("%s\n", t);
  return 0;
}

// trim: remove trailing blanks, tabs, newlines
int trim(char s[]) {
  int n;

  for (n = strlen(s) - 1; n >= 0; n--)
    if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
      break;
  s[n + 1] = '\0';
  return n;
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

#include <stdio.h>
#define MAXLINE 1000  // maximum input line length

int get_line(char line[], int max);
int strrindex(char source[], char searchfor[]);

char pattern[] = "ould";  // pattern to search for

/* find all lines matching pattern */
int main() {
  char line[MAXLINE];
  int found = 0, idx;

  while (get_line(line, MAXLINE) > 0)
    if ((idx = strrindex(line, pattern)) >= 0) {
      printf("%d: %s", idx, line);
      found++;
    }
  printf("%d lines found\n", found);
  return 0;
}

/* get_line: get line into s, return length */
int get_line(char s[], int lim) {
  int c, i;

  i = 0;
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
    s[i++] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';
  return i;
}

/* Exercise 4-01: strrindex(s,t) */
#include <string.h>

int strrindex(char s[], char t[]) {
  int i, j, k, leng = strlen(s) - strlen(t);

  for (i = leng; i >= 0; i--) {
    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
      ;
    if (k > 0 && t[k] == '\0')
      return i;
  }
  return -1;
}

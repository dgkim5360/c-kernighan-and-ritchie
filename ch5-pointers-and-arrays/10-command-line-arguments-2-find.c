#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int get_line(char *, int);  // from chapter 1-09

/* find: print lines that patch pattern from 1st arg */
int main(int argc, char *argv[]) {
  char line[MAXLINE];
  int found = 0;

  if (argc != 2)
    printf("Usage: find pattern\n");
  else
    while (get_line(line, MAXLINE) > 0)
      if (strstr(line, argv[1]) != NULL) {
        printf("%s", line);
        found++;
      }
  printf("%d lines found.\n", found);
  return 0;
}

/* get_line: read a line into s, return length */
int get_line(char s[], int lim) {
  int c, i;

  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

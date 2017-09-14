/**
To show that there is nothing special about functions like `fgets` and `fputs`,
here they are, copied from the standard library on our system:
*/

// fgets: get at most n chars from iop
char *fgets(char *s, int n, FILE *iop) {
  register int c;
  register char *cs;

  cs = s;
  while (--n > 0 && (c = getc(iop)) != EOF)
    if ((*cs++ = c) == '\n')
      break;
  *cs = '\0';
  return (c == EOF && cs == s) ? NULL : s;
}

// fputs: put string s on file iop
int fpus(char *s, FILE *iop) {
  int c;

  while (c = *s++)
    putc(c, iop);
  return ferror(iop) ? EOF : 0;
}

// easy implement of `getline` from `fgets`
// getline: read a line, return length
int getline(char *line, int max) {
  if (fgets(line, max, stdin) == NULL)
    return 0;
  return strlen(line);
}

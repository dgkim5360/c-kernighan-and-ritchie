/**
https://stackoverflow.com/questions/24898450/systemcalls-h-no-such-file-or-directory-found
http://pubs.opengroup.org/onlinepubs/7908799/xsh/unistd.h.html
*/
#include "unistd.h"
#include <stdio.h>

int main() {  // copy input to output
  char buf[BUFSIZ];
  int n;

  while ((n = read(0, buf, BUFSIZ)) > 0)
    write(1, buf, n);
  return 0;
}

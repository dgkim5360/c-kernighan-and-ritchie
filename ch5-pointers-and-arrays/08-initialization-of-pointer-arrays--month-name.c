#include<stdio.h>
#include<stdlib.h>

char *month_name(int);

int main(int argc, char *argv[]) {
  int month;
  while (--argc) {
    printf("%s\n", month_name(atoi(*(++argv))));
  }
  return 0;
}

/* month_name: return name of n-th month */
char *month_name(int n) {
  static char *name[] = {
    "Illegal month",
    "January", "Fabruary", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
  };

  return (n < 1 || n > 12) ? name[0] : name[n];
}

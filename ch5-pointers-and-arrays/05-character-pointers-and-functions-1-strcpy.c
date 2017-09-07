#include<stdio.h>
#define ALLOCSIZE 1000  // size of available space

static char allocbuf[ALLOCSIZE];  // storage for alloc
static char *allocp = allocbuf;  // next free position
char *alloc(int n);  // return pointer to n characters
void afree(char *p);  // free storage pointed to by p

void str_cpy(char *, char *);

int main(int argc, char *argv[]) {
  char *origin, *copied;
  while (--argc > 0) {
    copied = alloc(10);
    origin = *(++argv);
    printf("%s\n", origin);
    str_cpy(copied, origin);
    printf("copied string: %s\n", copied);
    afree(copied);
  }
  return 0;
}
/* strcpy: copy t to s; array subscript version
void strcpy(char *s, char *t) {
  int i;

  i = 0;
  while ((s[i] = t[i]) != '\0')
    i++;
}
*/

/* strcpy: copy t to s; pointer version 1
void strcpy(char *s, char *t) {
  while ((*s = *t) != '\0') {
    s++;
    t++;
  }
}
*/

/* strcpy: copy t to s; pointer version 2
void strcpy(char *s, char *t) {
  while ((*s++ = *t++) != '\0')
    ;
}
*/

/* strcpy: copy t to s; pointer version 3 (string.h) */
void str_cpy(char *s, char *t) {
  while (*s++ = *t++)
    ;
}

// A rudimentary storage allocator
char *alloc(int n) {  // return pointer to n characters
  if (allocbuf + ALLOCSIZE - allocp >= n) {  // it fits
    allocp += n;
    return allocp - n;  // old p
  } else  // not enough room
    return 0;
}

void afree(char *p) {  // free storage pointed to by p
  if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
    allocp = p;
}

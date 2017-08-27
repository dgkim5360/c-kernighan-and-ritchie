#include <stdio.h>

int atoi(char s[]);
void srand(unsigned int seed);
int rand(void);

int main(int argc, char *argv[]) {
  int i;
  if (argc == 3) {
    // printf("seed: %d\n", atoi(*(++argv)));
    // printf("count: %d\n", atoi(*(++argv)));
    srand(atoi(*(++argv)));
    // srand((unsigned int) atoi(*(++argv)));
    argv++;
    for (i = 0; i < atoi(*argv); i++)
      printf("%d ", rand());
    printf("\n");
  }

  // printf("%d ", rand());
  // printf("%d ", rand());
  // printf("%d ", rand());
  // printf("%d ", rand());
  // printf("%d ", rand());
  return 0;
}

unsigned long int next = 1;

/* rand: return pseudo-random integer on 0..32767 */
int rand(void) {
  next = next*1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

/* srand: set seed for rand() */
void srand(unsigned int seed) {
  next = seed;
}

/* atoi: convert s to integer */
int atoi(char s[]) {
  int i, n = 0;

  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10*n + (s[i] - '0');
  return n;
}

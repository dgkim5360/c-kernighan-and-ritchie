#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(int argc, char *argv[]) {
  char *word;

  while (--argc > 0) {
    word = *++argv;
    printf("%s : ", word);
    reverse(word);
    printf("%s\n", word);
  }
}

/* reverse: reverse string s in place */
void reverse(char s[]) {
  int c, i, j;

  for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
    // c = s[i];
    // s[i] = s[j];
    // s[j] = c;
    c = s[i], s[i] = s[j], s[j] = c;
}

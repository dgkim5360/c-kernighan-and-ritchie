#include <stdio.h>
#include <string.h>

void reverse(char [], int, int);

int main(int argc, char *argv[]) {
  char *word;
  register int lenword;

  while (--argc > 0) {
    word = *++argv;
    lenword = strlen(word);
    printf("%s : ", word);
    reverse(word, 0, lenword - 1);
    printf("%s\n", word);
  }
}

/* Exercise 4-13: Recursive reverse */
void reverse(char s[], int left, int right) {
  void swap(char [], int, int);

  if (left >= right)
    return;
  swap(s, left++, right--);
  reverse(s, left, right);
}

void swap(char v[], int i, int j) {
  register char temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

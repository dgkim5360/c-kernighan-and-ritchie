#include <stdio.h>
#define ARRAYSIZE 100

int atoi(char s[]);
int binsearch(int x, int v[], int n);

int main(int argc, char *argv[]) {
  register int i, idx, num;
  int arr[ARRAYSIZE];

  for (i = 0; i < ARRAYSIZE; i++)
    arr[i] = i;
  while (--argc > 0) {
    num = atoi(*++argv);
    idx = binsearch(num, arr, ARRAYSIZE);
    if (idx >= 0)
      printf("%d exists at index %d\n", num, idx);
    else
      printf("%d does not exist\n", num);
  }
  return 0;
}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else  // found match
      return mid;
  }
  return -1;  // no match
}

/* atoi: convert s to integer */
int atoi(char s[]) {
  int i, n = 0;

  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10*n + (s[i] - '0');
  return n;
}

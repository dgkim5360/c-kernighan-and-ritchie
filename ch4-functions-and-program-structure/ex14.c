#include <stdio.h>
#define ARRAYSIZE 10
// Exercise 4-14: macro swap
#define swap(t, x, y) {t temp; temp = x; x = y; y = temp;}

void qsort(int [], int, int);

int main() {
  register int i;
  int arr[ARRAYSIZE] = {9,2,5,3,7,4,1,8,6,0};

  for (i = 0; i < ARRAYSIZE; i++)
    printf("%d ", arr[i]);
  printf("\n");
  qsort(arr, 0, ARRAYSIZE - 1);
  for (i = 0; i < ARRAYSIZE; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}

/* qsort: sort v[left], ... , v[right] into increasing order */
void qsort(int v[], int left, int right) {
  int i, last;

  if (left >= right)  // do nothing if array contains fewer than two elements
    return;
  swap(int, v[left], v[(left+right)/2]);
  last = left;
  for (i = left + 1; i <= right; i++)  // partition
    if (v[i] < v[left]) {
      last++;
      swap(int, v[last], v[i]);
    }
  swap(int, v[left], v[last]);  // restore partition elem
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}

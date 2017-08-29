#include <stdio.h>
#define ARRAYSIZE 10

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
  void swap(int v[], int i, int j);

  if (left >= right)  // do nothing if array contains fewer than two elements
    return;
  swap(v, left, (left + right)/2);  // move partition elem to v[0]
  last = left;
  for (i = left + 1; i <= right; i++)  // partition
    if (v[i] < v[left])
      swap(v, ++last, i);
  swap(v, left, last);  // restore partition elem
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j) {
  int temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

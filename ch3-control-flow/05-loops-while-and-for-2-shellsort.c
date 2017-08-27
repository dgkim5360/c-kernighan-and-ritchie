#include <stdio.h>
#define ARRAYSIZE 10

void shellsort(int v[], int n);

int main() {
  register int i;
  int arr[ARRAYSIZE] = {9,2,5,3,7,4,1,8,6,0};

  for (i = 0; i < ARRAYSIZE; i++)
    printf("%d ", arr[i]);
  printf("\n");
  shellsort(arr, ARRAYSIZE);
  for (i = 0; i < ARRAYSIZE; i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}

/* shellsort: sort v[0], ..., v[n-1] into increasing order */
void shellsort(int v[], int n) {
  int gap, i, j, temp;

  for (gap = n/2; gap > 0; gap /= 2)
    for (i = gap; i < n; i++)
      for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
        temp = v[j];
        v[j] = v[j + gap];
        v[j + gap] = temp;
      }
}

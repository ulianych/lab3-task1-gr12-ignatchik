#include "sum.h"
#include <time.h>

void main (void)
{
  int size = 3;
  int *arr = (int *)malloc(size * sizeof(int));
  
  srand(time(NULL));
  for (int i = 0; i < size; i++) {
      arr[i] = rand() % 1000;
  }

  for (int i = 0; i < 3; i++) {
      printf("%d ", arr[i]);
  }
  findNumbersWithMaxDigitSum(arr, size);

  free(arr);
}

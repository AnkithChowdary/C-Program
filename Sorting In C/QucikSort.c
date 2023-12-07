#include<stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int lb, int up) {
  int pivot = arr[lb];
  int start = lb, end = up;

  while (start < end) {
    while (arr[start] <= pivot) {
      start++;
    }
    while (arr[end] > pivot) {
      end--;
    }
    if (start < end) {
      swap(&arr[start], &arr[end]);
    }
  }
  swap(&arr[lb], &arr[end]);
  return end;
}

void quickSort(int arr[], int lb, int up) {
  int loc;
  if (lb < up) {
    loc = partition(arr, lb, up);
    quickSort(arr, lb, loc - 1);             // it repeats until the whole array is sorted
    quickSort(arr, loc + 1, up);
  }
}

int main() {
  int arr[10] = {1,2,5,3,6,0};
  int s = sizeof(arr) / sizeof(arr[0]);
  quickSort(arr, 0, s - 1);
  for (int i = 0; i < s; i++)
    printf("%d ", arr[i]);

  return 0;
}

#include<stdio.h>

void main(){
  int arr[5] = {1, 5, 7, 10, 11};
  int arr2[7] = {2, 6, 8, 13, 15, 20, 24};
  int arr3[12];
  int i = 0, j = 0, k = 0;

  while (i < 5 && j < 7) {
    if (arr[i] < arr2[j]) {
      arr3[k++] = arr[i++];
    } else {
      arr3[k++] = arr2[j++];
    }
  }

  while (i < 5)
    arr3[k++] = arr[i++];

  while (j < 7)
    arr3[k++] = arr2[j++];
  
  for (int i = 0; i < 12; i++)
    printf("%d\n", arr3[i]);
}

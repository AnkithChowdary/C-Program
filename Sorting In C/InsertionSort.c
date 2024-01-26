#include<stdio.h>
void insertionSort(int arr[],int c){
  for(int i=1; i<c; i++){             // Actually here you are taking the first element as sorted sublist and all others as unsorted sublist
    int current=arr[i];                   // Current
     int j=i-1;
     while(j>=0&&arr[j]>current){
      arr[j+1]=arr[j];                 // Swaping until we meet the end(left most) from the current element 
      j--;
     }
     arr[j+1]=current;
  }
}






void main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    insertionSort(arr,arr_size);

    printf("\nSorted array is \n");
    for (int i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

  
}

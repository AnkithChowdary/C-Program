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
void main(){
  int arr[5]={1,5,3,6,7};
  int s=sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr, s);
  for(int i=0; i<5; i++)
  printf("%d ",arr[i]);
}
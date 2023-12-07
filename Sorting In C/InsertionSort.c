#include<stdio.h>
// void insertionSort(int arr[],int c){
//   for(int i=1; i<c; i++){             // Actually here you are taking the first element as sorted sublist and all others as unsorted sublist
//     int current=arr[i];                   // Current
//      int j=i-1;
//      while(j>=0&&arr[j]>current){
//       arr[j+1]=arr[j];                 // Swaping until we meet the end(left most) from the current element 
//       j--;
//      }
//      arr[j+1]=current;
//   }
// }

void mergeSort(int arr[], int st, int end) {
  if (st < end) {
    int mid = st + (end - st) / 2;
    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, st, mid, end);
  }
}

void merge(int arr[],int st,int mid,int end){
  int i=st,j=mid+1,k=0,temp[end-st+1];
  while(i<=mid&&j<=end){
     if(arr[i]<arr[j]){
      temp[k]=arr[i];
      k++,i++;
     }else{
      temp[k]=arr[j];
       k++,j++;
     }
  }
  while(i<=mid)
    temp[k++]=arr[i++];
  
  while(j<=end)
  temp[k++]=arr[j++];

}
void main(){
  int arr[5]={1,5,3,6,7};
  int s=sizeof(arr)/sizeof(arr[0]);
  // insertionSort(arr, s);
  mergeSort(arr,0,s);
  for(int i=0; i<5; i++)
  printf("%d ",arr[i]);
}
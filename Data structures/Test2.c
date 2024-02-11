#include<stdio.h>
int partition(int arr[],int l,int h){
  int i=l-1;
  int pivot=arr[h];
  for(int j=l;j<=h;j++){
    while(i<j&&arr[j]<pivot){
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[pivot]);

  return (i+1);
}

void quickSort(int arr[],int l,int h){
  if(l<h){
    int p=partition(arr,l,h);
    quickSort(arr,l,p);
    quickSort(arr,p+1,h);
    
  }
}










void main(){
  int arr[]={5,6,1,3,8,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  quickSort(arr,0,n-1);
  for(int i=0; i<n;i++)
  printf("%d ",arr[i]);
}
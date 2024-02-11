#include<stdio.h>
void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
void quickSort(int arr[],int l,int h);
int partition(int arr[],int low,int high){
int i=low-1;
int pivot=arr[high];
for(int j=low; j<=high;j++){
  if(arr[j]<pivot){
    i++;w
    
  swap(&arr[i],&arr[j]);
  }
}
swap(&arr[i+1],&arr[high]);
return (i+1);

}

void quickSort(int arr[],int l,int h){
  if(l<h){
    int p=partition(arr,l,h);
    quickSort(arr,l,p-1);
    quickSort(arr,p+1,h);

  }
}


int main(){
  int arr[]={5,4,3,7,14,4,1};
  int n=sizeof(arr)/sizeof(arr[0]);
  quickSort(arr,0,n-1);
  for(int i=0; i<n;i++)
  printf("%d ",arr[i]);
}
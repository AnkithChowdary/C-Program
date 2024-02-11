#include<stdio.h>
int merge(int arr[],int l,int mid,int h);

void mergeSort(int arr[],int l,int h){
if(l<h){

  int mid=l-(h-l)/2;
  mergeSort(arr,l,mid);
  mergeSort(arr,mid+1,h);
  merge(arr,l,mid,h);
}
}




int merge(int arr[],int l,int mid,int h){
int L=l;
int R=mid+1;
int k=l;
int tmp[h-l+1];
while(L<=mid&&R<=h){
  if(arr[L]<arr[R])
  tmp[k++]=arr[L++];
  else
  tmp[k++]=arr[R++];
}
while(L<=mid){
  tmp[k++]=arr[L++];
}
while(R<=h)
tmp[k++]=arr[R++];


for(int i=l,c=0; i<=h;i++,c++)
arr[i]=tmp[c];
}


void main(){
  int arr[]={5,6,1,3,8,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  mergeSort(arr,0,n-1);
  for(int i=0; i<n;i++)
  printf("%d ",arr[i]);
}
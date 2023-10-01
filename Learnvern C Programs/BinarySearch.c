#include<stdio.h>
int search(int arr[],int n,int k);
void sort(int arr[],int n, int k);
void main()
{
  int arr[8];
  for(int i=0; i<8; i++)
  {
    scanf("%d",&arr[i]);
  }
  int n=sizeof(arr)/sizeof(arr[0]);
  int b=6;
  sort(arr,n,b);
  for(int i=0; i<n; i++){
  printf("%d ",arr[i]);
  }
  search(arr,n,b);
  int g=search(arr,n,b);
  printf("\n%d",g);
}
 void sort(int arr[], int n, int k)
{
  for(int i=0 ; i<n-1; i++)
  {
    for(int j=0; j<n-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}

int search(int arr[], int n, int k)
{
 int l=0, r=n-1;
 while(l<=r)
 {
  int m=(l+r)/2;
  if(k>arr[m])
  {
    l=m+1;
  }else if(k==arr[m])
  {
    return m;
    break;
  }else
  {
    r=m-1;
  }
   
    
 }  

 return -1;
}
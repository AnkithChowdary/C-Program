#include<stdio.h>
void sort(int arr[],int n);
void main()
{
  int arr[5];
  for(int i=0; i<5; i++)
  {
    scanf("%d",&arr[i]);
  }
  sort(arr,5);
  for(int i=0; i<5; i++)
  {
    printf("%d ",arr[i]);
  }
}
void sort(int arr[],int n)
{
  for(int i=0 ;i<n-1;i++)
    for(int j=0; j<n-i-1; j++)
{
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
}
  
}

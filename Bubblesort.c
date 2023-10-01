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
  
    for(int j=0; j<n; j++)
{
      if(arr[j]>arr[j+1])
      {
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
}
  
}

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
  }else
  {
    r=m-1;
  }
   
    
 }  

 return -1;
}
// int arr[11]={1,5,7,9,14,17,20,44,50,77,80};
//      int k,flag=0;
//      scanf("%d",&k);
//      int l=0,r=10;
//      while(l<=r){
//      int mid=(l+r)/2;
//      if(arr[mid]==k)
//      {
//          printf("Found at index:%d",mid);
//          flag=1;
//          break;
//      }else if(k>arr[mid]){
//          l=mid+1;
//      }else
//      {
//          r=mid-1;
//      }
         
//      }
//      if(flag==0)
//      printf("Number not found!");
#include<stdio.h>
void main()
{
  int n,c=0;
  scanf("%d",&n);
  int arr[n];
  int j=0;
  for(int i=1; i<=n;i++)
  {
    if(n%i==0){
    arr[j]=i;
    j++;}
  }
  for(int i=0;i<n;i++)
  {
    if(arr[i]%2==0)
    c++;
  }
  printf("%d",c);
}
#include<stdio.h>

void main(){
  int n,e=0,o=0;
  
  int arr[]={1,2,6,5,7,99};
  for(int i=0; i<6;i++)
  {
    if(arr[i]%2==0)e++;
    else
    o++;
  }
  printf("%d %d",e,o);
}
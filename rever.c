#include<stdio.h>
void main(){
  int n;
  scanf("%d",&n);
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<=n-i;j++)
    {
      printf(" ");
    }
    for(int k=1; k<=n-i; k++)
    {
      printf("*");
    }
    printf("\n");
  }
}
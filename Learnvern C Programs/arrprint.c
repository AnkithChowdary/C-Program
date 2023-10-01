#include<stdio.h>
#include<stdlib.h>
void fun(int *p,int n)
{
  for(int i=0; i<n; i++)
  {
    scanf("%d",&p[i]);
  }
}
void main()
{
  int *p;
  int n;
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
   fun(p,n);
  for(int i=0; i<n; i++)
  {
    printf("%d ",p[i]);
  }
}
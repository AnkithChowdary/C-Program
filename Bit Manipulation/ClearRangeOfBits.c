#include<stdio.h>
void main()
{
  int n,i,j;
  scanf("%d%d%d",&n,&i,&j);
  int a=-1<<(i+1);
  int b=(1<<j)-1;   //2 power 1-1=001
  printf("%d",n&(a|b));
}                //2 power 2-1=011
                 // There we can write it as (1<<j)-1
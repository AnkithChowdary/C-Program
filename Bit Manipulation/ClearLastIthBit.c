#include<stdio.h>

void main()
{
   int n,i;
   scanf("%d%d",&n,&i);
   int k=-1<<i;
   int ans=n&k;
   printf("%d",ans);
}
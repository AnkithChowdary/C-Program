#include <stdio.h>
int c=0;
int sum(int k)
{
   if(k>0)
   {
    c=c+k;
    sum(k-1);
   }
   return c;
}
void main()
{
    int a;
    scanf("%d",&a);
    sum(a);
    printf("%d\n",c);
}

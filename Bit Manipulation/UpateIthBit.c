#include<stdio.h>

int clearBit(int a,int b)
{
  return a&~(1<<b); 
}

int setBit(int c,int d)
{
  return c|(1<<d);
}

int main()
{
  int n,i;
  scanf("%d%d",&n,&i);
  int o;
  scanf("%d",&o);
  if(o==0)
    printf("%d", clearBit(n,i));
  else
    printf("%d", setBit(n,i));

  return 0;
}

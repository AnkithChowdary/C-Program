#include<stdio.h>
int multi(int n,int pro)
{
  int r;
  if(n==0)
  return pro;
  else
  {
    r=n%10;
     pro*=r*multi(n/10,pro);
  }
}
void main()
{
  int n,p=1;
  scanf("%d",&n);
  int k=multi(n,p);
  printf("%d",k);
}
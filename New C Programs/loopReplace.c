#include<stdio.h>
int j=0;
int cout(int n)
{  
  if(n!=0)
  {
    j++;
    return cout(n/10);
  }
  else
  {
    return j;
  }
}
void main()
{
  int n;
  scanf("%d",&n);
  int k=cout(n);
  printf("%d",k);
}
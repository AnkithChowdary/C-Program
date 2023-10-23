#include<stdio.h>
void main()
{
  int n,k;      //001
  scanf("%d %d",&n,&k);
  n=(n|(1<<k));    //101   
  printf("%d",n);
}

#include<stdio.h>
void main()
{

  int i,n;

  scanf("%d%d",&n,&i);

  int s=-1<<i;

  int ans=n&s;
  
  printf("%d",ans);
  

}
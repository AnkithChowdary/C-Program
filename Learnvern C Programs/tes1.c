#include<stdio.h>
void main()
{
  int n=70,c,j=0;
  for(int i=1; i<=58; i++)
  {
    c=0;
    for(int k=2; k<=i;k++){
      if(i%k==0)
        c++;
    }
    if(c==1)
      j++;
  }
  printf("%d",n-j*2);
}

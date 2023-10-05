#include<stdio.h>
int prin();
void main()
{
  
  prin();
  prin();
}

int prin()
{
   static int k=5;    // It retains it's value and stored in ram and it's initial value is zero and it's lifetime is through out the program but scope is within the block
  k=k+10;
   printf("%d\n",k);
   return 0;
}
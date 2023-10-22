#include<stdio.h>
void main()
{
  register int i,sum=0;
  for(int i=0; i<8; i++)
  {
    sum+=i;                // Same as auto but here we store the variables in register so we can get faster access but storing all the variables in register is not a good method becuase register size will be in kb's
  }
  printf("%d\n",sum);   // one more point when you store address of any register varible in a pointer(but can use the register variable as pointer) it is not allowed becuase there is no address of that variable because it is in register
}
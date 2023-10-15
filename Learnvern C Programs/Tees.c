#include<stdio.h>
int a,b,c=0;
void display(void)
{
  static int a=2;
  int b=1;
  a+=++b;
  printf("%d %d\n",a,b);
}
void main()
{
   static int a=1;
   display();
   a+=1;
   display();
   printf("%d %d\n",a,b);
   return 0;
}
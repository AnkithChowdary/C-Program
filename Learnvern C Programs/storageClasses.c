#include<stdio.h>
int fun();
int n=12;
void main()
{
  
  printf("%d\n",n);
  {
    int n=20;
    printf("%d\n",n);
  }
  printf("%d\n",n);
  fun();
}
int fun()
{
  int n=14;
  printf("%d\n",n);
}
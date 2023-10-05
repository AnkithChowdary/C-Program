#include<stdio.h>
int display()
{
  static int x=5;
  int y=5;
  x++;
  y++;
  printf("%d\n",x);
  printf("%d\n",y);
}
void main()
{
  int i;
  for(int i=0; i<3; i++)
  display();
}
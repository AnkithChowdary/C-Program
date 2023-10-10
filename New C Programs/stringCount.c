#include"stdio.h"
#include"stdlib.h"
void main()
{
  int n;
  scanf("%d",&n);
  char *a = malloc(n*1);
  scanf("%d",a);
  printf("%d",a);

}

#include"stdio.h"
#include"string.h"
void main()
{
  int n;
  scanf("%d",&n);
  char na[n],s[n];
   scanf("%s %s",na,s);
   strcat(na,s);
   printf("%s",na);
}
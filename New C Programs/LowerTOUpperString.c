#include<stdio.h>
#include<string.h>
void main()
{
  char str[100];
  gets(str);
  for(int i=0; str[i]!='\0';i++)
  {
    if(str[i]>='A'&&str[i]<='Z')
    {
      str[i]=str[i]+32;
    }
  }
  printf("%s",str);
}
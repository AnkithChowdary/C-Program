#include<stdio.h>
#include<string.h>
void main()
{
   char n1[20]="Hi bhomraj";
   char n2[19]="I hope you are fine";
   char n3[24]="dhdjs";
   int len;
   strcpy(n1,n2);
   printf("%s\n",n1);
   strcat(n3,n1);
   printf("%s\n",n3);
   len=strlen(n3);
   printf("%d\n",len);
}
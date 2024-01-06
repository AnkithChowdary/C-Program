#include<stdio.h>
#include<string.h>
void main()
{
   char n1[20]="Hi bhomraj";
   char n2[]="I hope you are finec";
   char n3[]="dhdjs";
   int len;
   strcpy(n1,n2);
   printf("%s\n",n1);
   strcat(n3,n1);
   printf("%s\n",n3);
   len=strlen(n3);
   printf("%d\n",len);
}
#include<stdio.h>
#include<string.h>
char s[5];
int i=0;
void main()
{
    for(i=0;i<6;i++){
    int l=stren(s);
    printf("%d\n",l);
    scanf("%s\n",&s[i]);
    printf("%s\n",s[i]);
    }
}
int strlen(char s[])
{
    while (s[i]!=10)
    i=i+1;
    return i;
}

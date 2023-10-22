#include<stdio.h>
void main()
{
    int k;
    scanf("%d",&k);
    int count=0;
    while(k!=0)
    {
        k=k/10;
        count++;
    }
    printf("%d",count);
}
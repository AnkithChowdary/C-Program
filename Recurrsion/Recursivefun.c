#include<stdio.h>
void resu(int a,int b)
{
    if(a>0&&b>0)
    {
        printf("%d %d\n",a,b);
        resu(a-3,b-1);
    }
}
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    resu(a,b);
}
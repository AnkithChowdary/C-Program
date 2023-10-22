#include<stdio.h>
int cha(int *k)
{
    scanf("%d",k);
    return *k ;
}
int main()
{
    int k;
    scanf("%d",&k);
    cha(&k);
    printf("%d",k);
    return 0;
}
#include<stdio.h>
void main()
{
    int n=4965,t,sum=0;
    while(n>0){
    t=n%10;
    sum=sum+t;
    n=n/10;
    sum=sum+t;
    }
    printf("%d",sum);
}
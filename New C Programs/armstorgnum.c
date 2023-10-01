#include <stdio.h>
#include<math.h>
void main()
{
    int org,num,rem,re=0,n;
    scanf("%d",&num);
    org=num;
    n=0;
    while(org!=0)
    {
        org/=10;
        ++n;
    }
    org=num;
    while(org!=0)
    {
        rem=org%10;
        re+=pow(rem,n);
        org/=10;
    }
    if(re==num)
    {
        printf("Armstrong");
    }else{printf("Not arm");}
}
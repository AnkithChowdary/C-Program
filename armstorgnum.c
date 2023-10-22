#include <stdio.h>
#include<math.h>
void main()
{
    int org,num,rem,re=0,n;  // Method 1
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
#include<stdio.h>           //Method 2
#include<math.h>
#include<stdlib.h>

void main()
{
    int n;
    scanf("%d",&n);
    int res=0;
    int org=n;
    int k=log10(n)+1;      // counts no of digits in a number you can also use lke ceil(log10(n))
    while(org!=0){
        int digit=org%10;
        res+=pow(digit,k);
        org/=10;
    }
    if(res==n)
        printf("%d is an Armstrong number",n);
    else
        printf("%d is not an Armstrong number",n);
}
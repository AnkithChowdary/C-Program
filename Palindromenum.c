#include<stdio.h>
void main()
{
 int n,j,k,sum=0;
 scanf("%d",&n);
 k=n;
    while(n>0)
    {
        j=n%10;
        sum=sum*10+j;
        n=n/10;

    }
    printf("%d\n",sum);
    if(sum==k)
    {
printf("Palindrome\n");
    }else
    {
        printf("Not a palindrome\n");
    }
}
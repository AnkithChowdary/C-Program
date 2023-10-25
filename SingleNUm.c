#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n!=0)
     {
         sum+=n%10;
         n/=10;
     }
     while(sum>9){
         int temp=sum;
         sum=0; 
         while(temp!=0){
             sum+=temp%10;
             temp/=10;
             
         }
     }
     printf("%d",sum);
    return 0;
}
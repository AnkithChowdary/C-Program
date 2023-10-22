#include<stdio.h>
int num[10];
void main()
{
    int num[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter: ");
        scanf("%d",&num[i]);
        
    }
    for(int i=0;i<10;i++)
    {
        printf(" normal array: %d\n",num[i]);
    }
    for(int i=9;i>=0;i--)
    {
        printf("rev array: %d\n",num[i]);
        }
        int sum=0;
    for(int i=0;i<10;i++)
    {
        int sum=sum+num[i];
        printf("The sum is : %d\n",sum);
    }
        
 num[10]=num[0];
    for(int i=0;i<10;i++)
    {
       
num[i]=num[i+1];
printf("order: %d\n",num[i]);


    }

}

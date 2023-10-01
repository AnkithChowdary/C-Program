#include<stdio.h>
void swap(int i,int j);
void main()
{
    int i,j;
    printf("Enter the value of i :");
    scanf("%d",&i);

    printf("Enter the value of j :");
    scanf("%d",&j);
    printf("Value of i before swap: %d\n",i);
    
    printf("Value of j before swap: %d\n",j);
    swap(i,j);
    printf("Value of i after swap: %d\n",i);
    printf("Value of j after swap: %d\n",j);

}
void swap(int i,int j)
{
    int temp;
    temp=i;
    i=j;
    j=temp;
    
}
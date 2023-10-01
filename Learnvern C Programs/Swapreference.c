#include <stdio.h>
void swap(int *,int *);
int main()
{
    int i,j;
    printf("Enter the value of i :");
    scanf("%d",&i);
    printf("Enter the value of j :");
    scanf("%d",&j);
    printf("\nValue of i before swap: %d",i);
    printf("\nValue of j before swap: %d\n",j);
    swap(&i,&j);
    printf("\nValue of i after swap: %d",i);
    printf("\nValue of j after swap: %d",j);
    return 0;
}
void swap(int *i,int *j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
    return;
}
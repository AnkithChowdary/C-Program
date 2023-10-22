#include<stdio.h>
void main()
{
    int **num1;
    int *num2;
    int num3=2;
    num1=&num2;
    num2=&num3;
    printf("%d\n",**num1);
    printf("%d\n",*num2);
}
#include<stdio.h>
#include<stdlib.h>
int sum(int a, int b);
int sub(int a, int b);
int multi(int a,int b);
float divide(int a,int b);
void main()
{
while(1)
{
int a,b,op;
printf("Enter a : ");
scanf("%d",&a);

printf("Enter b : ");
scanf("%d",&b);

printf("Choose the operation you want : \n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Exit\n");
scanf("%d",&op);

switch (op)
{
case 1:
sum(a,b);
printf("Answer is %d \n",sum(a,b));
    break;
    case 2:
sub(a,b);
printf("Answer is %d \n",sub(a,b));

    break;
    case 3:
multi(a,b);
printf("Answer is %d \n",multi(a,b));

    break;
    case 4:
div(a,b);
printf("Answer is %f \n",divide(a,b));

    break;
    case 5:
    exit(1);
    break;
default:
printf("Please choose the correct option\n");
    break;
}


}

}


int sum(int a,int b)
{
    a+b;
    return a+b;
}
int sub(int a,int b)
{
    a-b;
    return a-b;
}
int multi(int a,int b)
{
    a*b;
    return a*b;
}
float divide(int a,int b)
{
    a/b;
    return a/b;
}
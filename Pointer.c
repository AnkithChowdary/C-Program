#include<stdio.h>
int some(int *a,int *b);
int sum(int a,int b);
void main()
{
    int a,b,*p,*q,*r;
     some(&a,&b);
   printf("The value of a is: %d\n",a);
    printf("The value of b is: %d\n",b);
    sum(a,b);
    printf("The sum of a and b is :%d",sum(a,b));
}
int some(int *a,int *b)
{
    
    printf("Enter the value of a and b:\n");  
   scanf("%d%d",a,b);
   return *a,*b;
}
int sum(int a,int b)
{
    int *p,*q,*r;
   p=&a;
   q=&b;
    *p+*q;
    return *p+*q;
}




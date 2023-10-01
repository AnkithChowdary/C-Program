#include<stdio.h>
void main()
{
    int num[3]={1,2,3},*p,*q,*r,i; char k;
    printf("The Numbers are :");
        printf("%d ",num[3]);
    p=&num[0];
    q=&num[1];
    r=&num[2];
    printf("\nType A:To add 1,2\nType B:To add 1,2,3\nType C:To add 1,3\ntype D:To add 2,3\n");
    printf("Enter the position of numbers you want to add :");
    scanf("%c",&k);
   switch (k)
   {
   case 'A':
    *p+*q;
       printf("The sum of first and second number is: %d\n",*p+*q);
    break;
    case 'B':
    *p+*q+*r;
       printf("The sum of first,second and third number is: %d\n",*p+*q+*r);
    break;
    case 'C':
    *p+*r;
       printf("The sum of first and third number is: %d\n",*p+*r);
       break;
    case 'D':   
    *q+*r;
       printf("The sum of second and third number is: %d\n",*q+*r);
       break;
   default:
   printf("Enter the appropriate character");
    break;
   }
    

}
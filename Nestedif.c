#include<stdio.h>
int main()
{ int a;
    printf("Plese enter your age: ");

   scanf("%d",&a);

   char id;
   printf("Plese enter your id number: ");
   scanf(" %c",&id);
   if(a>=18)
    {
     printf("You are eligible to vote :)\n");
     if(id=='y')
     {
        printf("your id is verified\n");
     }
     else
     {
       printf("your id is not verified\n");
     }

    }
   else
    {
     printf("You are not eligible to vote :(");
    }
   

}
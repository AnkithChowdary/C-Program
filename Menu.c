#include<stdio.h>
int menu(int a);
int sum(int j,int k,int l);
int p,b,pa,j,k,l,s;
void main()
{
  
  
  printf("\nList of Items and their prices\npizza\tpassta\tburger\n");
  printf("300\t500\t400\n");
  int a;
  printf("Choose the item  you want to eat\n1.Pizza\n2.burger\n3.pasta\n4.Exit\n");
  scanf("%d",&a);
  
   menu(a);
   
  printf("Your Bill :%d",sum(j,k,l));
  
}
  

int menu(int a)
{
  switch (a)
  {
  case 1:
    printf("Enter the quantity:");
    scanf("%d",&p);
    j=p*300;
    sum(j,k,l);
    break;
    case 2:
    printf("Enter the quantityz:");
    scanf("%d",&b);
    k=b*500;
    sum(j,k,l);
    break;
    case 3:
    printf("Enter the quantity:");
    scanf("%d",&pa);
    l=pa*400;
    sum(j,k,l);
    break;
  default:
  printf("The following item is not avalable\n");
  }
}
int sum(int j,int k,int l)
{
  int s=j+k+l;
  return s;
}
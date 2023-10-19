#include<stdio.h>
#define N 5;
#define arr[N];
int front=-1;
int rear=-1;
void enquee(int k)
{
  if(rear==N-1)
  printf("OverFlow\n");
  else if(front==-1&&rear==-1)
  rear=front=0;
  arr[]
}
void dequee(int s);
void main()
{
  int n,x;
  printf("1.enquee\n2.dequee\n3.peek\n4.display\n");
  scanf("%d",&n);
  switch (n)
  {
  case 1:
   printf("Enter the number:");
   scanf("%d",&x);
   enquee(x);
    break;
  
  default:
    break;
  }
}
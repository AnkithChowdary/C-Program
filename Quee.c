#include<stdio.h>
#define N 5
int arr[N];
int front=-1;
int rear=-1;
void enquee(int k)
{
  if(rear==N-1)
  printf("OverFlow\n");
  else if(front==-1&&rear==-1){
  rear=front=0;
  arr[rear]=k;}
  else
  rear++;
  arr[rear]=k;
}
void dequee()
{
  if(rear==-1)
  printf("UNDERFLOW\n");
  else if(rear==-1&&front==-1)
  rear=front=-1;
  else
  front++;
}
void display()
{
  for(int i=front; i<=rear;i++)
  printf("%d\n",arr[i]);
}
int main()
{
  while(1){
  int n,x;
  printf("1.enquee\n2.dequee\n3.display\n");
  scanf("%d",&n);
  switch (n)
  {
  case 1:
   printf("Enter the number:");
   scanf("%d",&x);
   enquee(x);
    break;
  case 2:
  
  dequee();
  break;
  case 3:
  display();
  break;
  default:
    break;
  }
  }
  return 0;
}
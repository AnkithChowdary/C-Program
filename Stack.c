#include<stdio.h>
int top=-1;
int n= 5;
int st[5];
 void display()
 {
  for(int i=top; i>=0; i--)
  {
    printf("%d\n",st[i]);
  }
 }
void pop()
{
  if(top==-1){
    printf("Stack underflow\n");
  }
  else{
    int an =st[top];
    printf("%d\n",an);
    top--;
    printf("Stack after pop\n");
  }
  display();
}

void push(int d)
{
   if(top==n-1){
     printf("Stack overflow\n");
   }
   else
   {
     top++;
     st[top]=d;
     printf("Stack after push\n");
   }
   display();
}

void peek()
{
  if(top==-1)
    printf("Stack is empty\n");
  else
  {
    printf("%d\n",st[top]);
  }
  display();
}

int main()
{ 
 int y;
 printf("Enter the number of operations you want to do");
 scanf("%d",&y);
 while(y--)
 {
  int k;
  printf("1.Pop\n2.push\n3.peek\n");
  scanf("%d",&k);
  switch(k)
  {
    case 1:
      pop();
      break;
    case 2:
      int s;
      printf("Enter the element you want to push: ");
      scanf("%d",&s);
      push(s);
      break;
    case 3:
      peek();
      break;
    default:
      printf("Invalid choice\n");
      break;
  }
 }
  for(int i=top;i>=0; i--)
  {
    printf("%d\n",st[i]);
  }
  return 0;
}

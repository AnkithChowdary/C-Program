#include<stdio.h>
void display(int n);
int sum(int k);
void main()
{
  // int k;
  // scanf("%d",&k);
  // printf("\n");
  // display(k);
  int b;
  scanf("%d",&b);
  sum(b);
  int d=sum(b);
  printf("%d",d);

}
// void display(int n)
// {
// {
//     int n=n*n-1;
//     display(n-1);
//   }  if(n<1){return;}
//   else
  
// int s=sum(k);
//   printf("%d",);
// }
int sum(int k)
{
  int s=0;
  if(k==1)
  {
    return k;
  }
  
    s=k+sum(k-1);
    return s;
  
}
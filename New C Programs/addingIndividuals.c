#include<stdio.h> 
int s=0;
int digitsSum(int p);         
void main()
{
  int n;                    //Adding indivisual digits of a number
  scanf("%d",&n);
   int sum=digitsSum(n);
   printf("%d",sum);
}

int digitsSum(int p)
{
  
  if(p==0)
  return s;
  else
  {
    s+=p%10;
    digitsSum(p/10);
  }

}
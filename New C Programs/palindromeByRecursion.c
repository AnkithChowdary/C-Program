#include<stdio.h>
int sum=0;
int pa(int k);
void main()
{
  int n;
  scanf("%d",&n);
  int ans=pa(n);
  printf("%d\n",ans);
  if(ans==n)
  printf("Palindrom\n");
  else
  printf("Not a palindrome\n");
}
int pa(int k)
{
  if(k==0)
  return sum;
  else
  {

     sum*=10+k%10;
     return pa(k/10);
  }

}
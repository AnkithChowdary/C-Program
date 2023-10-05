#include<stdio.h>

int pa(int k, int sum);

void main()
{
  int n;
  scanf("%d",&n);
  int ans=pa(n, 0);
  printf("%d\n",ans);
  if(ans==n)
    printf("Palindrome\n");
  else
    printf("Not a palindrome\n");
}

int pa(int k, int sum)
{
  if(k==0)
    return sum;
  else
  {
    sum=sum*10+k%10;
    return pa(k/10, sum);
  }
}

#include<stdio.h>
void main()
{
  int n=70,p,c=0,j=0;
  int freq[n];
  for(int i=n;i>=58; i--)
  {
    for(int k=2; k<=i;k++){
    if(i%k==0)
    c++;}
    if(c==1)
    j++;
  }
  printf("%d",n-j*2);
}
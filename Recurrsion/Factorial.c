#include<stdio.h>
int fac(int c){
  if(c==1)
  return 1;
  int z=c*fac(c-1);
  return z;
}
void main(){
  int n;
  scanf("%d",&n);
  int k=fac(n);
  printf("%d",k);
}
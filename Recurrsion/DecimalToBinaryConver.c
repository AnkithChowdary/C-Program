#include<stdio.h>
void binaryConver(int s){
  if(s==0)
  return;
   binaryConver(s/2);
  printf("%d",s%2);
}
void main(){
  int n;
  scanf("%d",&n);
  binaryConver(n);
}
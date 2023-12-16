#include<stdio.h>
int natural(int c){
  if(c==0)
  return 0;

  int s=c+natural(c-1);
  return s;
}
int main(){
  int n;
  scanf("%d",&n);
  int x=natural(n);
  printf("%d",x);
  return 0;
}
#include<stdio.h>
void display(int c){
  if(c==0)                                  // 4  3  2  1(top)   -stack frames
  return;
  display(c-1);
  printf("%d ",c);           
}
void main(){
  int n;
  scanf("%d",&n);
  display(n);
}
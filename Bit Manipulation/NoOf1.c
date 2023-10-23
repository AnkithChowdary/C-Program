#include<stdio.h>

void main(){
  int n,c=0;
  scanf("%d",&n);
  while(n!=0){
    n&=(n-1);      //Leetcode
    c++;
  }
  printf("%d",c);
}
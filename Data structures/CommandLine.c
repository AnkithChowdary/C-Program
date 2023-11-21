#include<stdio.h>
#include<stdlib.h>
int main(int c,char *argv[]){
  if(c!=3)
  return 1;

  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  printf("%d",a+b);
}

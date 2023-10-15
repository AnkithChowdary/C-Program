#include<stdio.h>
void main(){
int year;
scanf("%d",&year);
if(year % 4 == 0) {
if(year % 100 == 0) {
// the year is a leap year if it is divisible by 400.
    if(year % 400 == 0)
    printf("%d is a leap year.\n", year);
    else
    printf("%d is not a leap year. \n", year);
    }else
    printf("%d is a leap year.\n", year);
}else
  printf("%d is not a leap year. \n", year);
}
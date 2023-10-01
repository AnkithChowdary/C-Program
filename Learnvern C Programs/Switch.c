#include<stdio.h>
int main()
{
  char i;
  printf("Enter your grade in capital letters:");
  scanf(" %C",&i);
  switch(i)
 {
    case 'A': 
     printf("Awesome! Keep it up");
        break;
    case 'B': 
     printf("Good ");
        break;
    case 'C': 
     printf("Need to work");
        break;
    case 'D': 
     printf("Not good");
        break;
    case 'F': 
     printf("You failed in the exam");
        break;
    case 'O': 
     printf("You are absent");
     break;
     default:
     printf("You didn't choose the given grade options");
 }
 return 0;

}
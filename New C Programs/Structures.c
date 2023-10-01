#include<stdio.h>

struct persons
{
  char name[15];
  int id;
  char schoolName[11];
  char FatherName[14];
  int exp;
};


void main()
{

int n;
printf("enter the number of persons");
scanf("%d",&n);
  struct persons arr[n];

  for(int i=0;i<n;i++)
  {

 printf("Enter your Name:");
  scanf("%s",p[i].name);
  printf("Enter your id:");
  scanf("%d",&p[i].id);
  printf("ENter your school Name:");
  scanf("%s",p[i].schoolName);
printf("enter your experience");
scanf("%d",&p[i].exp);

  }
 printf("\nName\tID\tSchool\tExperience\n");

  for(int i=0;i<n;i++)
  {


printf("%s\t%d\t%s\t%d\n",p[i].name,p[i].id,p[i].schoolName,p[i].exp);

  }



 
}
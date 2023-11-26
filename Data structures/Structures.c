#include<stdio.h>

struct persons
{
  char name[15];
  int id;
  char schoolName[11];
  char FatherName[14];
  int exp;
};

int main()
{
   /* The code you provided is creating a structure called `persons` which contains the following
   fields: `name`, `id`, `schoolName`, `FatherName`, and `exp`. */
    int n;
    printf("Enter the number of persons: ");
    scanf("%d", &n);
  
    struct persons arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter your Name: ");
        scanf("%s", arr[i].name);
        printf("Enter your id: ");
        scanf("%d", &arr[i].id);
        printf("Enter your school Name: ");
        scanf("%s", arr[i].schoolName);
        printf("Enter your experience: ");
        scanf("%d", &arr[i].exp);
    }

    printf("\nName\tID\tSchool\tExperience\n");

    for(int i = 0; i < n; i++)
    {
        printf("%s\t%d\t%s\t%d\n", arr[i].name, arr[i].id, arr[i].schoolName, arr[i].exp);
    }

    return 0;
}

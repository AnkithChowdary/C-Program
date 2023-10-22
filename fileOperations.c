#include<stdio.h>
void main()
{
  FILE *ptr;
  char l1[30]="Hello",l2[30]="World";
  ptr=fopen("ankith.doc","w");
  fprintf(ptr,"%s %s",l1,l2); // Write data into the file
  fclose(ptr);

  ptr=fopen("ankith.doc","r");
  fscanf(ptr,"%s %s",l1,l2); // Read data from the file

  printf("%s %s",l1,l2);
  fclose(ptr);
}

#include<stdio.h>
void main()
{
  FILE *ptr;
  ptr=fopen("new.txt","w");
  char na[50]="HI i am hero and i don't care about anyone",a[2];
  fprintf(ptr,"%s",na);
  fprintf(ptr," hi",a);
  fclose(ptr);
  ptr=fopen("new.txt","a");
  int b=5;
 
  fprintf(ptr,"%d",b);
  fclose(ptr);
  char ch;

  ptr = fopen("new.txt","r");
  if(ptr == NULL)
  {
    printf("File does not exist \n");
    return;
  }

  while((ch = fgetc(ptr)) != EOF) 
    printf("%c",ch);
     int k=ftell(ptr);
  printf("%d",k);

  fclose(ptr);
}

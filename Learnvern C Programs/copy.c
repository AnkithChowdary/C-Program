#include<stdio.h>
void main()
{
  FILE *ptr;
  ptr=fopen("ankit.txt","w");
  int a=4,b=5;
  fprintf(ptr,"%d ""%d",a,b); 
  fclose(ptr);
  
  int c,d;
  FILE *cp;

  cp=fopen("duplicat.txt","w");
  ptr=fopen("ankit.txt","r");
  fscanf(ptr,"%d""%d",&c,&d); 
  fprintf(cp,"%d ""%d",c,d); 
  fclose(cp);
  fclose(ptr);
}

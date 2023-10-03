#include<stdio.h>
void main()
{
  FILE *ptr;
  char l1[30],l2[30];
  ptr=fopen("ankith.txt","w+");
  fprintf(ptr,"Hello""World",l1,l2); // Write data into the file
  rewind(ptr); // Move file pointer to the beginning of the file

  fscanf(ptr,"%s %s",l1,l2); // Read data from the file
                            // why again i used scanf even the data is already present in the file:in a more general case you might want to write data to a file, close the program, then open the program again later and read the data back from the file into memory.

//In such a case, the original data in l1 and l2 would be lost when the program is closed, so you would need to read it back from the file when you start the program again. That’s where fscanf would be useful
  printf("%s %s",l1,l2); 
  fclose(ptr);
}

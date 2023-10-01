#include <stdio.h>
#include <stdlib.h>
void main()
{
    char l1[10];
    char l2[10];
    FILE *fileName;
    fileName=fopen("Ankith.txt","w+");
    fprintf(fileName,"%s %s","Hello","Everyone");
    rewind(fileName);
    fscanf(fileName,"%s %s",l1,l2);
    fseek(fileName,0,SEEK_END);
    int ft=ftell(fileName);
    printf("%d\n",ft);
    
    printf("%s %s",l1,l2);
    fclose(fileName);
}
#include <stdio.h>
#include<stdlib.h>

void main()
{
    char l1[10];
    char l2[10];
    FILE *file;
    file=fopen("suman.pdf","w+");
    fscanf(file,"%s %s",l1,l2);
    fprintf(file,"%s %s","Hello","world");
    
    fclose(file);
}
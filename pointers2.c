#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char g[7]="Ankith",*t;
    t=malloc(sizeof(char)*7);
    strcpy(t,g);
    printf("%s",t);
    free(t);
}

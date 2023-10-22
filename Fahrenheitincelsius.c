#include<stdio.h>

float con(int);
/*Fahrenhiet to celsius*/
void main()
{ 
    int fah;
    printf(" FAHARENHEIT TO  CONVERTER CELSIUS\n");
    int i=0;
    for(int i=0;i<3;i++)
    {
        printf("Enter the val:");
        scanf("%d",&fah);
        float sol=con(fah);
        printf("In Celsius:%.2f\n",sol);
        
    }
}
float con(int fah)
{ float cel;
    cel=(5*(fah-32))/9;
    return cel;
}
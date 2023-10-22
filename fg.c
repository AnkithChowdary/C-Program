#include<stdio.h>
#include<math.h>
void main()
{
    double r,v;
    scanf("%lf",&r);
    v=(4.0/3.0)*3.14159*pow(r,3);
    printf("%.2lf",v);
}
#include<stdio.h>
void main()
{
  float n;
  scanf("%f",&n);
  (n>0)?printf("%.0f",(int)n+0.5):printf("%.0f",(int)n-0.5);
}
#include<stdio.h>
void main()
{
  auto int a=4;
  printf("%d\n",a);
  {
   auto int a;              //The default storage class for any variable is auto
    printf("%d\n",a);        // The default value for auto storage class is garbage value
  }                          // The scope is within the block
}                              // They will be stored in stac
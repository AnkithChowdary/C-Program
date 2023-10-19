#include<stdio.h>
void main()
{
  int arr1[3][2]={{1,2},{4,3},{3,2}};             
    int arr2[2][3]={{1,2,4},{4,3,5}};
   int arr3[3][3],sum;
   for(int i=0; i<3;i++)
   {
    for(int j=0; j<3;j++){
      sum=0;
      for(int k=0; k<3;k++)
       sum+=arr1[i][k]*arr2[k][j];
       arr3[i][j]=sum;
    }
   }
   for(int i=0; i<3;i++)
   {
    for(int j=0; j<3;j++){                          // This is the correct code for matrix multiplication
     printf("%d\t",arr3[i][j]);            
    }
    printf("\n\n");
   }
}
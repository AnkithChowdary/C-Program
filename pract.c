#include<stdio.h>
void main()
{
  int arr1[3][3]={{1,2,3,},{1,4,4},{4,5,4}};
  int arr2[3][3]={{1,2,-5},{1,4,-4,},{4,5,4}};
  int arr3[3][3];                                            // I am lazy so took same numbers in both the arrays
  int sum=0;
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++){
      printf("%d\t",arr1[i][j]);
      sum+=arr1[i][j];
    }
    printf("\n\n");
  }
  printf("%d",sum);
  printf("So the transpose is:\n");
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)            
    {
      printf("%d\t",arr1[j][i]);
    }
    printf("\n\n");
  }
  //   for(int i=0; i<3; i++)
  //  {
  //   for(int j=0; j<5; j++){                        // Here is the main process 
  //     arr3[i][j]=arr1[i][j]+arr2[i][j];
  //   }

  // }
  //  for(int i=0; i<3; i++)
  // {
  //   for(int j=0; j<5; j++){
  //     printf("%d\t",arr3[i][j]);                     //SUm of 2 2d arrays(matrix addition)
  //   }
  //   printf("\n\n");
  // }
  int multi=0; 
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<3; j++)
      {
        for(int k=0; k<3; k++){
        multi+=arr1[i][k]*arr2[k][j];
        }
        arr3[i][j]=multi;
      }                          //Multiplication of 2d arrays(matrix multiplication)
    } 
    for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++){
      
      printf("%d\t",arr3[i][j]);                    
    }
    printf("\n\n");
  }

}

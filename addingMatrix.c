#include<stdio.h>
void main()
{
  int rows=5,columns=3,sr,sc;
  int arr[rows][columns];
  for(int i=0; i<rows; i++)
  {
    for(int j=0; j<columns;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("The Original one:\n");
  for(int i=0; i<rows;i++)
  {
    for(int j=0; j<columns;j++)
    {
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  printf("Transposed one:\n");
  for(int i=0; i<columns; i++)
  {
    sr=sc=0;
    for(int j=0; j<rows; j++)
    printf("%d\t",arr[j][i]);
    printf("\n");
  }

  
}
#include<stdio.h>
void main()
{
  // int n[2][4];
  // for(int i=0; i<2; i++){
  // for(int j=0; j<4;j++)
  // scanf("%d",&n[i][j]);}

  // for(int i=0; i<2; i++)
  // {
  // for(int j=0; j<4;j++){
  // printf(" %d %d:%d ",i,j,n[i][j]);
  // if(j==3)
  // printf("\n");
  // }
  // }
  
    char n[3][2][50]; // This declares a 2D array of strings

    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++){
            printf("Enter string for n[%d][%d]: ", i, j);
            scanf("%s",n[i][j]);
        }

    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++){
            printf("Name[i:%d][j:%d]:%s  ",i,j,n[i][j]);
            if(j==1)
                printf("\n\n");
        }


}
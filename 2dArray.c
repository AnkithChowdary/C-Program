#include<stdio.h>
void main()
{
    int arr[3][4],sum=0;
    for(int i=0 ;i<3; i++)
    {
        for(int j=0 ; j<4; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<3 ; i++)
    {
        printf("\n");
        for(int j=0 ;j<4 ;j++)
        {
        
            
            printf(" \tarr[%d][%d]: %d\t",i,j,arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("\t%d",sum);
}
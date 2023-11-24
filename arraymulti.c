#include<stdio.h>
void main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int arr1[r][c];
	for(int i=0;i<r; i++){
		for(int j=0; j<c;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	int r1,c1;
	scanf("%d%d",&r1,&c1);
	if(r==c1&&c==r1){
		int arr2[r1][c1];
		for(int i=0; i<r1; i++){
			for(int j=0; j<c1; j++){
				scanf("%d",&arr2[i][j]);
			}
		}
		int arr3[r][c1],sum;
		for(int i=0; i<r; i++){
			
			for(int j=0; j<c1; j++){
				sum=0;
				for(int k=0; k<c; k++){
					sum+=arr1[i][k]*arr2[k][j];
				}
				arr3[i][j]=sum;
			}
		}
		for(int i=0; i<r; i++){
			for(int j=0; j<c1; j++)
				printf("%d ",arr3[i][j]);
			printf("\n");
		}
	}
	else
	printf("NOT POSSIBLE\n");
}
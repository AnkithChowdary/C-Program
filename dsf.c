#include<stdio.h>
void main(){
    // int tr,r,r1,r2,c=0,k=0;
    // printf("Enter the starting range:");
    // scanf("%d",&r1);
    // printf("Enter the End range:");
    // scanf("%d",&r2);
    // printf("Enter the number of terms:");
    // scanf("%d",&tr);
    // printf("Enter the rows:");
    // scanf("%d",&r);
    // for(int i=1,j=r1; i<=tr; i++){
    //     while(j<=r2){
    //     printf("%dx%d=%d ",i,j,i*j);
    //     c++;
    //     if(c==r){
    //         printf("\n");
    //         c=0;
    //         i++;
    //         j=r1;
    //         k++;
    //         if(k==r){
    //         printf("\n\n");
    //         i=1;
    //         }
    //     }
    //     j++;
    //     }
    
        
    // }
  
    int startRange, endRange, numTerms, numRows, count = 0;

    printf("Enter the starting range: ");
    scanf("%d", &startRange);
    printf("Enter the End range: ");
    scanf("%d", &endRange);
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    for (int i = 1; i <= numTerms; i++) {
        for (int j = startRange; j <= endRange; j++) {
            for (int k = 1; k <= numRows; k++) {
                printf("%d x %d = %d\t", i, j, i * j);
                count++;
                if (count % numRows == 0) {
                    printf("\n");
                }
            }
        }
        printf("\n\n");
        count = 0;
    }
    // int startRange, endRange, numTerms, numRows, count = 0;

    // printf("Enter the starting range: ");
    // scanf("%d", &startRange);
    // printf("Enter the End range: ");
    // scanf("%d", &endRange);
    // printf("Enter the number of terms: ");
    // scanf("%d", &numTerms);
    // printf("Enter the number of rows: ");
    // scanf("%d", &numRows);

    // for (int i = 1; i <= numTerms; i++) {
    //     for (int j = startRange; j <= endRange; j++) {
    //         for (int k = 1; k <= numRows; k++) {
    //             printf("%d x %d = %d\t", i, j, i * j);
    //             count++;
    //             if (count % numRows == 0) {
    //                 printf("\n");
    //             }
    //         }
    //     }
    //     printf("\n");
    //     count = 0;
    // }
}

    



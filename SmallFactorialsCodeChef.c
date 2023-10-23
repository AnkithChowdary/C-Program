#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,l,m,k;
        scanf("%d",&n);
        int arr[158];   // because factorial 100 takes 158 digits places
        m=1;
        arr[0]=1;
        for(int j=2; j<=n;j++){
            l=0;
            for(k=0; k<m; k++){
                arr[k]=arr[k]*j+l;
                l=arr[k]/10;
                arr[k]=arr[k]%10;
            }
          while(l){
              arr[k]=l%10;
              k++;             // Here if there is any carry  . 
              m++;
              l=l/10;
          }
        }
        for(int i=m-1; i>=0; i--)
            printf("%d",arr[i]);
         
         printf("\n");
    }
}
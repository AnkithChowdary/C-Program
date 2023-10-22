#include<stdio.h>
void main()
{
    int n,c=0,j=0;
    scanf("%d",&n);
    int arr[n],a[n];
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    for(int j=0; j<n; j++)
    {
        if(arr[j]==0)
            c++;
    }
    
    for(int k=n-1; k>=c;k--)
    {
        a[k]=0;
    }
    for(int i=0;i<n; i++){
        if(arr[i]!=0){
            a[j]=arr[i];
            j++;
        }
    }
    for(int i=0; i<n;i++)
        printf("%d ",a[i]);
}

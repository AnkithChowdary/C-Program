// #include <stdio.h>

// int main() {
//     unsigned long int n;
//     int d;
//     scanf("%lu%d",&n,&d);
//     unsigned long int arr[n], rotatedArr[n];
    
//     for(int i=0; i<n; i++)
//         scanf("%lu",&arr[i]);
    
//     for (int i = 0; i < n; i++) 
//         rotatedArr[i] = arr[(i + d) % n];
    
    
//     for(int i=0; i<n; i++)
//         printf("%lu ",rotatedArr[i]); 
    
//     return 0;
// }
#include<stdio.h>  
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    d%=n;                     // Reduces the number of rotations
    int arr[n],temp[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }                                // this method is more effective
    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];
    }
    int j=0;
    for(int i=d; i<n; i++)
    {
       arr[i-d]=arr[i]; 
    }
    for(int i=n-d; i<n; i++)
    {
        arr[i]=temp[j++];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
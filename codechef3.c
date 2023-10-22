#include <stdio.h>
#include<string.h>
int main() {
    int T;
    scanf("%d",&T);
    while(T--)
    {
       int arr[100],n,start38 = 0, ltime108 = 0;
       scanf("%d",&n);
       for(int i = 0;i < n;i++)
       {
         scanf("%s",arr[i]);
         if(arr)
       
       if (strcmp(arr, "START38") == 0)
            {
                start38++;
            }
            else if (strcmp(arr, "LTIME108") == 0)
            {
                ltime108++;
            }
        }

        printf("%d %d\n", start38, ltime108);
    }
       
        
    
	return 0;
}
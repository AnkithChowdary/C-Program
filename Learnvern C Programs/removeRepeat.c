#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n], arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int k = 0;
    for(int i = 0; i < n; i++) {
        int j;
        for(j = 0; j < k; j++) {
            if(a[i] == arr[j])
                break;
        }
        if (j == k) {
            arr[k] = a[i];
            k++;
        }
    }
    
    for(int i = 0; i < k; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}

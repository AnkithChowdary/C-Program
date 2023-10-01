#include<stdio.h>

void rev(int a[], int n) {
    int temp;
    for(int i=0; i<n/2; i++) {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    rev(arr, n);
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

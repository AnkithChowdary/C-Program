#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char arr[30];
    scanf("%d", &num);
    for(int i=0; i<num; i++){
    
    scanf("%s", arr);

    int k = strlen(arr);
    for (int i = k - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
	printf("\n");
	}

    return 0;
}

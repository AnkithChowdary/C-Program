#include<stdio.h>
int main() {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int A,B,D;
        scanf("%d %d %d",&A,&B,&D);
        int C=A+B;
        (C==D)?printf("YES\n"):
        printf("NO\n");
        

        
    }
	return 0;
}

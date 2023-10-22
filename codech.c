#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    while(T--)
    {
        
       int x,y,z,c,d;
       scanf("%d %d",&x,&y);
       if(y%x==0)
       {
          z=y/x;
          printf("%d\n",z);
       }else if(y%x!=0&&y>x)
       {
           c=y;
           d=c/x;
           printf("%d\n",d);
       }else
       {
           printf("0\n");
       }
        
    }
	return 0;
}
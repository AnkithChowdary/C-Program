#include <stdio.h>
void main()
{
    int a,i;
    printf("Enter the number:");
    scanf("%d",&a);
    (a%2==0)?printf("num is even\n"):
    printf("num is odd\n");
    for(i=0;i<6;++i)
    {
        printf("%d\n",i);
    }
    int x=0,y=0;
    while(x<20){
        x=++y;
    x=y++;
    
    /*int x1=++y;*/
    printf("%d\n",x);
    /*printf("%d\n",x1);*/
    }
}
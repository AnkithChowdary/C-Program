#include <stdio.h>
#include<math.h>

int main() {
    int T;
    while(T--)
    {
        int u,v,w,x,y,z;
        scanf("%d %d %d %d %d %d",&u,&v,&w,&x,&y,&z);
        if(u+v>u+w&&u+v>v+w){
            int adda1=x+y;
            printf("%d\n",adda1);
        }
        if(u+w>u+v&&v+w)
        {
            int adda2=u+w;
            printf("%d\n",adda2);
        }
        if(v+w>u+v&&v+w>u+w)
        {
            int adda3=v+w;
            printf("%d\n",adda3);
        }
        if(x+y>y+z&&x+y>x+z)
        {
            int addb1=x+y;
            printf("%d\n",addb1);
        }
        if(x+z>x+y&&x+z>y+z)
        {
            int addb2=x+z;
            printf("%d\n",addb2);
        }
        if(y+z>x+y&&y+z>x+z)
        {
            int addb3=y+z;
            printf("%d\n",addb3);
        }
        
    }
    return 0;
}

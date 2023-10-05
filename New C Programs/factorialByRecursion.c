#include<stdio.h>
int fac(int k)
{
    if(k==0||k==1)
    return 1;
    else
    return k*fac(k-1);
}
void main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int n; 
    scanf("%d",&n);
    int ans=fac(n);
    printf("%d\n",ans);
    }
}
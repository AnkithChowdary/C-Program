#include <stdio.h>
int c;
int sum(int a){
  
    if(a==0)
    return 0;
    else{
     c=a+sum(a-1);
return c;
    }
}
void main()
{
    int x;
    scanf("%d",&x);
   int c= sum(x);
      printf("%d\n",c);

}
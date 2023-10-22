#include <stdio.h>
    int numb(int n);

void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int c=a+b;
         int m=0;
         while(c>0){
           
           m=m+=numb(c%10);
c=c/10;


         }
         printf("%d\n",m);
    }
}

    int numb(int n)
    {
  if(n==0||n==6||n==9)
  return 6;
  else if(n==1)
return 2;
else if(n==2||n==3||n==5)
return 5;
else if(n==4)
return 4;
else if(n==7)
return 3;
else if(n==8)
return 7;



    }
    

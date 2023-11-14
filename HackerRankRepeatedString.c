#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,x;
    int c=0;
    char arr[100];
    gets(arr);
    scanf("%lld",&n);
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]=='a')
        c++;
    }
    int a=strlen(arr);
    x=n;
    x=x/a;
    x=x*c;
    n=n%a;
    
    for(int i=0; i<n; i++)
    {
      if(arr[i]=='a')
      x++;  
    }
    printf("%lld\n",x);
    return 0;
}
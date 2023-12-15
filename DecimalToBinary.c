#include<stdio.h>
#include<math.h>
int DecimalToBinary(int k){
   int p=0,s=0;
   while(k!=0){
     int r=k%2;
     s=s+r*pow(10,p);
     p++;
     k/=2;
   }
   return s;
}
void main(){
  int n;
  scanf("%d",&n);
 int ans=DecimalToBinary(n);
 printf("%d",ans);
}
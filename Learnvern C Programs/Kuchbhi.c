#include<stdio.h>
int check(char a,char b,int c)
{
   if(a=='n'&&c>30)
      return 1;
    else if(a=='n'&&b=='f'&&c>25)
    return 1;
    else
    return -1;

}
void main()
{
  char m,gender;
  int age;
  scanf("%c%c",&m,&gender);
  scanf("%d",&age);
  int ans=check(m,gender,age);
  printf("%d",ans);
}
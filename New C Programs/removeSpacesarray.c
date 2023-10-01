#include<stdio.h>
#include<string.h>
void main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  char l[n];
  char result[50] = "";
  for(int i=0; i<n; i++)
  {
    scanf("%d ",&arr[i]);
  }
  for(int i=0; i<n; i++)
  {
    char l[n];
    sprintf(l,"%d",arr[i]);
    strcat(result, l);
  }
  printf("%s",l);
}
#include"stdio.h"
void main()
{
  int n;
  scanf("%d",&n);
  int a[n],arr[n];
  for(int i=0; i<n; i++)
  {
    scanf("%d",&a[i]);
  }
  int k=0;
  for(int i=0; i<n; i++)
  {
    for(int j=0;j<n; j++)
    {
      if(a[i]==a[j])
      {
        
        for(int k=0; k<n; k++)
      {
        a[i]=a[k+1];
        k--;
        j--;
      }
      }
    }
  }
  for(int i=0; i<n;i++)
  {
    printf("%d\n",arr[i]);
  }
}
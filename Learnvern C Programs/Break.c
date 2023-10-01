#include<stdio.h>
void main()
{
    int i;
    for (i = 0; i < 14; i++)
    {
      printf("%d ",i);
        if(i==3)
        {
            i++;
          continue;

        }
        if (i==8)
        {

            
          break;
        } 
      
        
      
    }
    printf("out the loop");
}

#include <stdio.h>

int main()
{
  int a[7];
  int c=0;
  
  for(int i=0;i<=6;i++)
    scanf("%d", &a[i]);

  printf("\noutput:\n");

  for(int j=0;j<=6;j++)       
     if(a[j]<0)
        {
        	printf("%d   ", a[j]);
        	c++;
        }
        
  printf("\nc=%d", c);
  
 return 0;

}
#include <stdio.h>

int main()
{
 int i,j;
 
 for(i=3;i<=5;i++)
 {
    j=2;
    while(j<=16)
    {
    	printf("%d  ", j);      
    	j=j*2;
    }
	printf("\n");        
 }
   
  return 0;
}
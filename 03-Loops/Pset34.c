#include <stdio.h>

int main()
{
 int i,j,s;
 
 for(i=0; i<=1 ; i++)  
   for(j=0;j<=1; j++)
      {
      	s= i || j;
      	printf("i=%d\tj=%d\ti || j=%d\n", i, j, s);
      }
   
  return 0;
}
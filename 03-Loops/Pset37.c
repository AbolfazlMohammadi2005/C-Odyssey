#include <stdio.h>

int main()
{
 int i,j,k;
 
 for(i=1;i<=4;i++)
 {
  for(j=1;j<=2;j++)
  {
    for(k=1; k<=3; k++)   
      printf("%d  ", k);
	    printf("\n");        
  }
  printf("\n");      
}
   
  return 0;
}
#include <stdio.h>

int main()
{
 int i,j,k;
 
 for(i=6;i>=2;i-=2)
 {
  for(j=1;j<=3;j++)
  {
    for(k=1; k<=2; k++)   
      printf("%d  ", i);
	    printf("\n");        
  }
  printf("\n");      
}
   
  return 0;
}
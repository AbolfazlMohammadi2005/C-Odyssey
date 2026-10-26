#include <stdio.h>

int main()
{
  int i;
  for(i=1; i<=20; i++)
      {
        if (i==7)
           break;
        else   
	  	  printf("%d\n", i);
      }
  printf("*\n");
  
  return 0;
}
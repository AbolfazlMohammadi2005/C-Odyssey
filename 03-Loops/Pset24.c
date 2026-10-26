#include <stdio.h>

int main()
{
  int x,y,z=1;
  printf("Enter x:");
  scanf("%d", &x);
  
  printf("Enter y:");
  scanf("%d", &y);
  
  int i=1;
  while(i++<=y)
    	z*=x;
  
  printf("z=%d\n", z);
  
  return 0;
}
#include <stdio.h>

int main()
{
  int a, b, c;
  
  printf("Enter three numbers (a b c): ");
  scanf("%d %d %d", &a, &b, &c);
  
  if(a < b)
  {
    if(a < c)
      printf("Min = %d\n", a);
    else
      printf("Min = %d\n", c);
  }
  else
  {
    if(b < c)	      
      printf("Min = %d\n", b);
    else
      printf("Min = %d\n", c);
  }
	   
  return 0;
}
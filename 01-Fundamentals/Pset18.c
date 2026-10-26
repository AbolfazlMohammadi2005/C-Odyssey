#include <stdio.h>
#include <limits.h>  

int main()
{
  printf("%d", INT_MAX);
  printf("\n");
  printf("%d", INT_MIN);
  
  printf("\n\n");
  
  printf("%d", SHRT_MAX);
  printf("\n");
  printf("%d", SHRT_MIN);
  
  printf("\n\n");
  
  printf("%ld", LONG_MAX);  
  printf("\n");
  printf("%ld", LONG_MIN);

  printf("\n\n");
  
  return 0;
}
#include <stdio.h>

int main()
{
  int a=4;
  int b;
  
  b= --a * a--;
  
  printf("%d\n", b);
  
  return 0;
}

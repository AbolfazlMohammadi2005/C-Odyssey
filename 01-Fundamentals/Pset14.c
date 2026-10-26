#include <stdio.h>

int main()
{
  int x=2,y;
  
  y=(x=10,x+4,9);
  
  printf("%d\n", x);
  printf("%d\n", y);
  
  return 0;
}

#include <stdio.h>

int main()
{
  int x=8;
  int y=4;
  int z,q;

  z= x>y  ?  x : y;
  q= x<y  ?  x : y;
  
  printf("%d\n", z);
  printf("%d\n", q);
  
  return 0;
}

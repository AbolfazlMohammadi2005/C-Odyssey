#include <stdio.h>

int x = 1;
int a_x = 2;

int main()
{
  int x = 3;
  int *gx;
  {
    extern int x;
    gx = &x;
  }
  ++x;
  printf("%d\n", ++ *gx);                          
  printf("%d\n", x + a_x + *gx);              
  return 0;
}

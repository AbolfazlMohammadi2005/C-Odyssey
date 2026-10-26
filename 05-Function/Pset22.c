#include <stdio.h>

void f();

int main()
{
   f();
   f();
   f();
   
   return 0;
}

void f()
{
  int x=1;
  printf("%d\n", x);
  x++;	
}


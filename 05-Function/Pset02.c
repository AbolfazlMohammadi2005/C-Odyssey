#include <stdio.h>

int f(int);    

int main()
{
  int a=2;
  int b;
  
  b=f(a);
  
  printf("%d\n", b);
  
  return 0;
}

int f(int x)
{
	return 2*x;
}







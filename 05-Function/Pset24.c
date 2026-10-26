#include <stdio.h>

int f(int a, int b, int c);

int main()
{
  int x=4,y=5,z=6;
  printf("%d\n", f(x,y,z));
  printf("%d\n", f(x,y,3));
  printf("%d\n", f(x,2,3));
  printf("%d\n", f(1,2,3));
  
  return 0;
}

int f(int a,int b,int c)
{
	return a+b+c;
}



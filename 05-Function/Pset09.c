#include <stdio.h>

// f(x)= x^2-5x+6

int f(int);

int main()
{
  int x;
  printf("Enter x:");
  scanf("%d", &x);
  
  printf("f(x)=%d\n", f(x));
  
  return 0;
}

int f(int x)
{
	return x*x-5*x+6;
}


#include <stdio.h>

void f(int *);

int main()
{
   int x=2;
   f(&x);
   printf("%d\n", x);
   return 0;
}

void f(int *a)
{
	*a=*a+1;
}

#include <stdio.h>

int f(int *, int *);

int main()
{
   int x=2;
   int y=5;
   int z;
   z=f(&x,&y);
   printf("x=%d\n", x);   // value
   printf("y=%d\n", y);   //reference
   printf("z=%d\n", z);
   return 0;
}

int f(int *a, int *b)
{
	(*a)++;
	(*b)++;
	return *a+*b;
}

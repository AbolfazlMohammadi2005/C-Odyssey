#include <stdio.h>

int square_int(int);
double square_double(double);

#define square(x) _Generic((x), int: square_int, double: square_double)(x)

int main()
{
   int a=3;
   double b=2.5;
   printf("%d\n", square(a));
   printf("%g\n", square(b));
   return 0;
}

int square_int(int a)
{
	return a*a;
}

double square_double(double d)
{
	return d*d;
}

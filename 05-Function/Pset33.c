#include <stdio.h>

int product_ii(int, int);
int product_iii(int, int, int);
double product_id(int, double);

int main()
{
   int x=2;
   int y=3;
   int z=4;
   double d=1.5;
   printf("%d\n", product_ii(x,y));
   printf("%d\n", product_iii(x,y,z));
   printf("%g\n", product_id(x,d));
   return 0;
}

int product_ii(int a, int b)
{
	return a*b;
}

int product_iii(int a,int b,int c)
{
	return a*b*c;
}

double product_id(int a,double b)
{
	return a*b;
}

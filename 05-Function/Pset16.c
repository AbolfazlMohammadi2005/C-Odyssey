#include <stdio.h>
#include <math.h>

 //   f(a,b)= (a^b) /  ((a+3b)^2)
 
double f(int, int);

int main()
{
  int a,b;
  printf("Enter a,b:");
  scanf("%d %d", &a, &b);
  
  printf("%g\n", f(a,b));
  
 return 0;
}

double f(int a, int b)
{
	double k= (double) pow(a,b) / pow(a+3*b,2);
	return k;
}
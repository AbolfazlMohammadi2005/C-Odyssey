#include <stdio.h>

//   (2*4*6*8*...) / (1*3*5*7*...)
float f(int);
int main()
{
 int n;
 printf("Enter n:");
 scanf("%d", &n);
 
 printf("%g\n", f(n));
 
 return 0;
}

float f(int n)
{
	float sum=1;
	for (int i=2;i<=n;i+=2)
	    sum *= (1.0*i) / (i-1);
		
    return sum;	    
}
  

#include <stdio.h>
#include <math.h>

const double PI = 3.14159;

static inline double f(const double r) 
{ 
   return PI * pow(r, 2); 
} 

int main()
{
   double r;
   
   printf("Enter r: ");
   scanf("%lf", &r);  
   printf("Area = %g\n", f( r ));
   
   return 0;
}





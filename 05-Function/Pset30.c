#include <stdio.h>

int f(int);         
void g(int *);  

int main()
{
   int x = 2;
   int y = 3;
   printf("f(x)=%d\n", f(x));  
   printf("x = %d\n", x);
   g(&y);
   printf("y = %d\n", y);
   return 0;
}

int f(int a)
{
   return  a *= a;  
} 

void g(int *b)
{
   *b *= *b;   
} 

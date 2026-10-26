#include <stdio.h>

int f_int_int(int, int);
int f_int_char(int, char);

#define f(a, b) _Generic((b), int: f_int_int, char: f_int_char)(a, b)

int main()
{
   int  x=2;
   int  y=3;
   char ch='A';   
   printf("%d\n", f(x,y));   
   printf("%d\n", f(x,ch));  
   return 0;
}

int f_int_int(int a, int b)
{
	return a*b;
}

int f_int_char(int a,char b)
{
	return a+b;
}

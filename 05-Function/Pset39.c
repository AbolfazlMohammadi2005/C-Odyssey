#include <stdio.h>

void f(int);

int main()
{
  int a=7129;
  f(a);
 return 0;
} 

void f(int x)
{
   if (x<10)	
      printf("%d", x);   
    else
	   {
    	 printf("%d", x %10);   
    	 f(x/10);         
       }
}



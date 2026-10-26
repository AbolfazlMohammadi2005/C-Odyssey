#include <stdio.h>

int sum(int);

int main()
{
  int a=100;

  printf("%d\n", sum(a));
   
  return 0;
} 

int sum(int n)
{
	if(n==0 || n==1)
	   return n;
    return n+sum(n-1);	   
}



#include <stdio.h>

int f(int);

int main()
{
  int i;
  for(i=0; i<=10; i++)
    printf("%d\t%d\n", i, f(i));
  
      return 0;
}

int f(int a)
{
	int s;
	s=a*a;
	return s;
}








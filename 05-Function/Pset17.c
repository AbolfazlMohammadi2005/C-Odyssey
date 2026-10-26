#include <stdio.h>

int pow(int, int);

// (a^b)^c    (2^3)^2=8^2=64

int main()
{
  int a,b,c;
  printf("enter a,b,c:");
  scanf("%d %d %d", &a, &b, &c);
  
  printf("%d\n", pow(pow(a,b),c));
  
 return 0;
}

int pow(int x, int y)
{
	int p=1;
	for (int i=1 ; i<=y; i++)
	          p=p*x;
    return p;	     
}

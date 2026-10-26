#include <stdio.h>

int gcd(int, int);

int main()
{
  int x,y;
  printf("Enter x:");
  scanf("%d", &x);
  printf("---------------------------------\n");
  printf("Enter y:");
  scanf("%d", &y);
  printf("---------------------------------\n");
  
  printf("%d\n", gcd(x,y));
  
 return 0;
}

int gcd(int x, int y)
{
	int r;
	r=x%y;
	while(r!=0)
	{
		x=y;
		y=r;
		r=x%y;
	}
   return y;	
}


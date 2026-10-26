#include <stdio.h>
#include <stdbool.h>

int f(int n, int *, int *);

int main()
{
  int n,r=0,c=0,sum=0;
  printf("Enter n:\n");	
  scanf("%d", &n);
  sum=f(n,&r,&c);
  printf("n=%d\n", n);
  printf("reverse=%d\n", r);
  printf("c=%d\n", c);
  printf("sum=%d\n", sum);
   return 0;
}

int f(int n, int *r, int *c)
{
	int d;
	int s=0;
	while(true)
	{
		d=n%10;
		n=n/10;
		s+=d;
		*r=*r*10+d;
		(*c)++;
		if(n==0) 
		 break;
	}
	return s;
}

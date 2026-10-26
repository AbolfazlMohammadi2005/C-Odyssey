#include <stdio.h>

void swap(int *, int *);

int main()
{
   int x=2;
   int y=5;
   swap(&x,&y);
   printf("x=%d\n", x);
   printf("y=%d\n", y);
   return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

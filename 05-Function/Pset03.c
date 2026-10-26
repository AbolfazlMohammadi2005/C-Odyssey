#include <stdio.h>

int f(int , int);

int main()
{
  int x,y;
  printf("Enter x,y:");
  scanf("%d %d", &x, &y);
  
  printf("sum=%d\n", f(x,y));  
  
  return 0;
}
int f(int a , int b)
{
	return a+b;
}







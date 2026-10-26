#include <stdio.h>

int p(int, int);

int main()
{
  int a=2,b=10;
  printf("%d\n", p(a,b));

  return 0;
} 

int p(int x,int y)
{
   if (y==1)	
      return x;
   return x*p(x,y-1);      
}

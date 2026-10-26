#include <stdio.h>

//  f(x,y,z)=2x+3(y+z)
int f(int , int , int);

int main()
{
  int x,y,z;
  printf("Enter x:");
  scanf("%d", &x);
  printf("---------------------------------\n");
  printf("Enter y:");
  scanf("%d", &y);
  printf("---------------------------------\n");
  printf("Enter z:");
  scanf("%d", &z);
  printf("---------------------------------\n");
  
  printf("%d\n", f(x,y,z));
  
  return 0;
}
int f(int x , int y , int z)
{
	int k;
	k=2*x+3*(y+z);
	return k;
}






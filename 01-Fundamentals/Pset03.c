#include <stdio.h>

int main()
{
  int a,b;
  
  printf("Enter a:");
  scanf("%d", &a);
  
  printf("Enter b:");
  scanf("%d", &b);
  
  printf("%d\n", a+b);
  printf("%d\n", a-b);
  printf("%d\n", a*b);
  printf("%d\n", a%b);
  
  return 0;
}

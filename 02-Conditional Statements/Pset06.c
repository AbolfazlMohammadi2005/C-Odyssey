#include <stdio.h>

int main()
{
  int x, y, temp;
  
  printf("Enter two numbers (x y): ");
  scanf("%d %d", &x, &y);
  
  if(x > y)
  {
    temp = x;
    x = y;
    y = temp;
  }
  
  printf("Sorted: %d\t%d\n", x, y);
  
  return 0;
}
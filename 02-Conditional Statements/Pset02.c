#include <stdio.h>

int main()
{
  int x, y;
  
  printf("Enter two numbers (x y): ");
  scanf("%d %d", &x, &y);
  
  if (y == 0)
    printf("Error: Cannot divide by zero!\n");
  else if (x % y == 0)
    printf("%d is divisible by %d -> Yes\n", x, y);
  else
    printf("%d is NOT divisible by %d -> No\n", x, y);
     
  return 0;
}
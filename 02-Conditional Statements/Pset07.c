#include <stdio.h>

int main()
{
  int a, b;
  
  printf("Enter two numbers (a b): ");
  scanf("%d %d", &a, &b);
  
  if(b != 0 && a % b == 0)
    printf("Yes, %d is divisible by %d\n", a, b);
  else if(b == 0)
    printf("Error: Division by zero!\n");
  else
    printf("No, %d is not divisible by %d\n", a, b);
  
  return 0;
}
#include <stdio.h>

int main()
{
  int n, a, s = 0;
  
  printf("========== REVERSE NUMBER ==========\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  
  int original = n;
  
  printf("\nProcess:\n");
  
  while(n > 0)
  {
    a = n % 10;
    s = s * 10 + a;
    printf("n = %d  |  a = %d  |  s = %d\n", n, a, s);
    n = n / 10;
  }
  
  printf("\nReverse of %d = %d\n", original, s);
  printf("====================================\n");
  
  return 0;
}
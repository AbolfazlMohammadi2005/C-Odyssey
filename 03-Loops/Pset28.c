#include <stdio.h>

int main()
{
  int n, d, sum = 0;
  
  printf("========== DIGIT SUM CALCULATOR ==========\n");
  printf("Enter a number: ");
  scanf("%d", &n);
  
  int original = n;
  
  printf("\nProcess: ");
  
  do {
    d = n % 10;
    sum += d;
    
    if(n >= 10)
      printf("%d + ", d);
    else
      printf("%d", d);
    
    n = n / 10;
  } while(n != 0);
  
  printf(" = %d\n", sum);
  printf("==========================================\n");
  
  return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
  int n;
  bool isPrime = true;
  
  printf("========== PRIME NUMBER CHECKER ==========\n");
  printf("Enter n > 3: ");
  scanf("%d", &n);
  
  if(n <= 1)
  {
    printf("Invalid number!\n");
  }
  else if(n == 2)
  {
    printf("2 is prime\n");
  }
  else if(n % 2 == 0)
  {
    printf("%d is NOT prime (even number)\n", n);
  }
  else
  {
    for(int i = 3; i <= sqrt(n); i += 2)
    {
      if(n % i == 0)
      {
        isPrime = false;
        printf("%d is divisible by %d\n", n, i);
        break;
      }
    }
    
    if(isPrime)
      printf("%d is PRIME ✓\n", n);
  }
  
  printf("==========================================\n");
  
  return 0;
}
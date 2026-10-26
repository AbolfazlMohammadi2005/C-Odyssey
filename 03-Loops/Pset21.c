#include <stdio.h>

int main()
{
  int sum = 0;
  int n;
  
  printf("Enter n: ");
  scanf("%d", &n);
  
  int i = 1;
  while(i <= n)
  {
    sum += i;
    i++;
  }
  
  printf("Sum of 1 to %d = %d\n", n, sum);
  
  return 0;
}
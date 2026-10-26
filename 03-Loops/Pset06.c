#include <stdio.h>

int main()
{
  // 1+2+3+4+5=?
  int sum = 0;
  int i,n;
  
  printf("Enter n: ");
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
    sum += i;
  
  printf("Sum of 1 to %d = %d\n", n, sum);
  
  return 0;
}
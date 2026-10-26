#include <stdio.h>

int main()
{
  int sum = 0;
  int i = 0;
  int n;
  
  printf("Enter positive numbers (enter <=0 to stop):\n");
  
  for( ; ; )
  {
    scanf("%d", &n);
    if(n <= 0)
      break;
    sum += n;
    i++;
  }
  
  if(i > 0)
    printf("Average = %g\n", (float)sum / i);
  else
    printf("No valid numbers entered!\n");
  
  return 0;
}
#include <stdio.h>

int main()
{
  int sum = 0;
  int i;
  
  printf("========== BREAK EXAMPLE ==========\n");
  printf("Stop when sum > 30\n");
  printf("-----------------------------------\n");
  
  for(i = 1; ; i++)
  {
    sum += i;
    
    if(sum > 30)
      break;
      
    printf("i = %d  |  sum = %d\n", i, sum);
  }
  
  printf("-----------------------------------\n");
  printf("Break at i = %d (sum would be %d)\n", i, sum);
  printf("Final sum = %d\n", sum);
  
  return 0;
}
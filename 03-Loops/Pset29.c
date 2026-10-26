#include <stdio.h>

int main()
{
  int n = 0;
  int i = 1;
  int fact = 1;
  
  printf("n\tFactorial\n");
  printf("------------------\n");
  
  do {
    n++;
    fact *= n;
    printf("%d\t%d\n", n, fact);
    ++i;
  } while(i <= 5);
  
  return 0;
}
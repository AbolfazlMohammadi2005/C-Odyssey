#include <stdio.h>
#include <stdbool.h>

int main()
{
  int bound;
  
  printf("========== FIBONACCI SEQUENCE ==========\n");
  printf("Enter bound: ");
  scanf("%d", &bound);
  
  int f0 = 0;
  int f1 = 1;
  int f2;
  int count = 0;
  
  printf("\nIndex\tFibonacci\n");
  printf("-----\t---------\n");
  printf("%d", count++); printf("\t%d", f0); printf("\n");
  printf("%d", count++); printf("\t%d", f1); printf("\n");
  
  while(true)
  {
    f2 = f0 + f1;
    if(f2 > bound) 
      break;
    printf("%d", count++); printf("\t%d", f2); printf("\n");
    f0 = f1;
    f1 = f2;
  }
  
  printf("========================================\n");
  
  return 0;
}
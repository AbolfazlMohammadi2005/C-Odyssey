#include <stdio.h>

int main()
{
  int a, b;
  
  printf("Enter a, b: ");
  scanf("%d %d", &a, &b);
  
  printf("\nOutput:\n");
  
  for(int i = a; i <= b; i++)
  {
    if(i % 2 == 0)
      printf("%d\n", i);
    else
      printf("*\n");
  }
  
  return 0;
}
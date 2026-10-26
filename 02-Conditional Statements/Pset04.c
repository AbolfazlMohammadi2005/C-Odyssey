#include <stdio.h>

int main()
{
  int n;
  
  printf("Enter a number: ");
  scanf("%d", &n);
  
  if(n == 13)
    printf("Yes, you entered 13!\n");
  else
    printf("No, you entered %d, not 13!\n", n);
  
  return 0;
}
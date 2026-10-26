#include <stdio.h>

int main()
{
  char ch;
  int i;
  
  printf("Enter text (end with '.'): ");
  
  for(i = 0; ((ch = getchar()) != EOF) && ch != '.'; i++);
  
  printf("Count: %d\n", i);
  
  return 0;
}
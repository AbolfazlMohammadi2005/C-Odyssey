#include <stdio.h>

int main()
{
  char ch;
  int na = 0, nb = 0, nc = 0;
  int other = 0;
  
  printf("========== CHARACTER COUNTER ==========\n");
  printf("Enter text (end with '.'): \n");
  
  while((ch = getchar()) != '.')
  {
    switch(ch)
    {
      case 'a':
      case 'A': 
        na++; 
        break;
      case 'b':
      case 'B': 
        nb++; 
        break;
      case 'c':
      case 'C': 
        nc++; 
        break;
      default: 
        other++;
    }
  }
  
  printf("\n========== RESULTS ==========\n");
  printf("a/A count: %d\n", na);
  printf("b/B count: %d\n", nb);
  printf("c/C count: %d\n", nc);
  printf("Other chars: %d\n", other);
  printf("Total chars: %d\n", na + nb + nc + other);
  
  return 0;
}
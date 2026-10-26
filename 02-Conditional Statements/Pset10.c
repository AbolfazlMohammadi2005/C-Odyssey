#include <stdio.h>

int main()
{
  char ch;
  
  printf("Enter a character (r, g, b): ");
  scanf(" %c", &ch);
  
  switch(ch)
  {
    case 'r': 
      printf("red\n");
      break;
    case 'g': 
      printf("green\n");
      break;
    case 'b': 
      printf("blue\n");
      break;
    default: 
      printf("error\n");
  }
  
  return 0;
}
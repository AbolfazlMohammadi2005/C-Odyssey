#include <stdio.h>

int main()
{
  char ch;
  
  printf("Enter a character: ");
  scanf(" %c", &ch);
  
  switch(ch)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':    
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      printf("ok - it's a vowel!\n");
      break;
    default:
      printf("no - it's not a vowel!\n");
  }
  
  return 0;
}
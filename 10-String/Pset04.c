#include <stdio.h>
#include <string.h>

int main()
{
  char ch;
  
  while(((ch = getchar()) != EOF))
  {
  	if (ch=='b')
  	  ungetc('f', stdin);
    else
  	  printf("%c", ch);
  }
  
  return 0;
}
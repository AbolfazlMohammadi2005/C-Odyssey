#include <stdio.h>
#include <ctype.h>

int main()
{
  char ch;
  
  while(((ch = getchar()) != EOF)) 
  {
    if(islower(ch))
      printf("%d", toupper(ch));
    else
      printf("%c", ch);
  }
  
  return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
  char ch;
  
  while(((ch = getchar()) != EOF))
  {
    printf("%c", ch);
  	
	  {
  	   int next;
  	   while((next = getchar()) == 'b');
  	   ungetc(next, stdin);
  	  }
  	
  	if(ch=='.')
  	   break;
  }
  
  return 0;
}
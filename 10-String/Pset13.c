#include <stdio.h>
#include <string.h>

int main()
{
  printf("%s", strchr("abcdbfghbk", 'b'));
  
  printf("\n");
  
  printf("%s", strrchr("abcdbfghbk", 'b'));
  
  return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
  char s[] = "I am making a picture";
  char *p;
  
  p = strtok(s, " ");
  
  int c = 0;
  
  do {
    ++c;
    printf("%s\n", p);
    p = strtok(NULL, " ");
  } while(p != NULL);
  
  printf("\n\nnumber token = %d", c);
  
  return 0;
}
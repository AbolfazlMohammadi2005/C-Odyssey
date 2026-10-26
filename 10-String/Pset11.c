#include <stdio.h>
#include <string.h>
#include <stdlib.h>  

int main()
{
  char s1[]="amirreza";
  char s2[]="amirali";
  
  printf("%d", strncmp(s1,s2,5));
  
  return 0;
}

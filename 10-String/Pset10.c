#include <stdio.h>
#include <string.h>
#include <stdlib.h>  

int main()
{
  char s1[]="ali";
  char s2[]="reza";
  
  strncat(s1,s2,3);
  printf("%s\n", s1);      
  
  return 0;
}
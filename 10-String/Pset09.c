#include <stdio.h>
#include <stdlib.h>  
#include <string.h>

int main()
{
  char s1[]="abc";
  char s2[]="defgh";
  
  strncpy(s1,s2,2);
  
  printf("%s\n", s1);   
  
  return 0;
}
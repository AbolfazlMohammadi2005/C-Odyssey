#include <stdio.h>
#include <string.h>
#include <stdlib.h>  

int main()
{
  char s1[]="12abcd";
  printf("%d\n", atoi(s1)/2); 
 
  char s2[]="45.7cdfdf";
  printf("%g\n", atof(s2)/2);
  
  char s3[]="123456789";
  printf("%ld\n", atol(s3)/2);
  
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
  printf("%g\n", pow(2, 3));
  printf("%g\n", pow(2, -2));
  
  printf("\n\n");
  
  printf("%g\n", fmod(6, 4));
  printf("%g\n", fmod(-20, 7));

  printf("\n\n");

  printf("%d\n", abs(-2));
  printf("%g\n", fabs(-3.5));

  printf("\n\n");  
    
  printf("%g\n", floor(3.1));
  printf("%g\n", ceil(3.1));
  
  printf("\n\n");
  
  printf("%g\n", log10(100));
  printf("%g\n", log(2.7));
  
  printf("%c\n", (char)tolower('A'));
  printf("%c\n", (char)toupper('a'));
  
  printf("\n\n");
  
  printf("%d\n", islower('B'));
  printf("%d\n", isupper('B')); 
 
  printf("\n\n");

  printf("%d\n", (int)('a'));
  printf("%c\n", (char)(97));
 
  return 0;
}
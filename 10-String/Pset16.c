#include <stdio.h>
#include <string.h>

int main()
{
   const char *s1 = "abcdefgh";
   const char *s2 = "dbahc";
   
   printf("%zu", strspn(s1, s2));
   
   printf("\n------\n");
   
   printf("%zu", strcspn("abcde", "hdf"));
   
   return 0;
}
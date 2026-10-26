#include <stdio.h>
#include <string.h>

int main()
{
  char s[] = "alireza";
  char *p;
  p = strchr(s, 'r');
  printf("strchr(s, 'r') = %s\n", p);     
  
  char s2[] = "alireza";
  char *p2;
  p2 = strstr(s2, "re");        
  printf("strstr(s2, \"re\") = %s\n", p2);  
  
  return 0;
}
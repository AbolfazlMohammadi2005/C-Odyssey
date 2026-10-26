#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void f(char *, const char *);

int main()
{
  char s1[20];
  char *s2 = "ali";
  
  f(s1, s2);
  
  printf("%s", s1);
  
  return 0;
}

void f(char *a, const char *b)
{
  int i = 0;
  for( ; (a[i] = b[i]) != '\0'; i++);
}
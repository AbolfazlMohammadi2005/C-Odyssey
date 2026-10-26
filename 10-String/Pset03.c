#include <stdio.h>
#include <string.h>

int main()
{
  char s[10];
  s[0] = '\0';
  scanf("%9[^f]", s);
  printf("%s\n", s);

  return 0;
}
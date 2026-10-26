// String     
#include <stdio.h>
#include <string.h>

void string_replace(char *s, size_t pos, size_t len, const char *str)
{
  size_t n = strlen(str);
  memmove(s + pos + n, s + pos + len, strlen(s + pos + len) + 1);
  memcpy(s + pos, str, n);
}

int main()
{
  char s[100] = "abdef.";
  int k;
  k = strstr(s, "b") - s;  //k=1
  string_replace(s, k + 1, 0, "c");
  printf("%s", s);    //abcdef.
 
}

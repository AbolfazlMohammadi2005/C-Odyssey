// String   :   s.length ( )   s.find(ch)   s.replace(n1,n2,str)   s1.swap(s2)    
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
  char s[] = "abcde";
  printf("%zu", strlen(s));   //5
  printf("\n-------------\n");
  
  char t[] = "abcde";
  printf("%td", strstr(t, "d") - t);   //3
  printf("\n-------------\n");
  
  char w[100] = "abcdef";
  string_replace(w, 1, 3, "hk");
  printf("%s", w);  //ahkef
  printf("\n-------------\n");
  
  char s1[100] = "one";
  char s2[100] = "two";
  char temp[100];
  strcpy(temp, s1);
  strcpy(s1, s2);
  strcpy(s2, temp);
  printf("%s\n", s1);  //two
  printf("%s", s2);        //one
  
}

//template
#include <stdio.h>

#define DEFINE_F(T) \
T f_##T (T x) \
{ \
   x+=3; \
   return x;	\
}

DEFINE_F(int)
DEFINE_F(double)
DEFINE_F(char)

#define f(x) _Generic((x), int: f_int, double: f_double, char: f_char)(x)

int main()
{
  int a=1;
  double d=2.7;
  char ch='A';
  printf("%d\n", f(a));        
  printf("%g\n", f(d));         
  printf("%c\n", f(ch));     
  return 0;
} 

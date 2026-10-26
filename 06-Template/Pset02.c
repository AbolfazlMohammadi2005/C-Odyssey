//overload   -   template
#include <stdio.h>

#define DEFINE_REVERSE(T) \
T reverse_##T (T x) \
{ \
   return -x;	\
}

DEFINE_REVERSE(int)
DEFINE_REVERSE(double)

#define reverse(x) _Generic((x), int: reverse_int, double: reverse_double)(x)

int main()
{
  int a=3;
  double d=2.7;
  printf("%d\n", reverse(a));   
  printf("%g\n", reverse(d));   
  return 0;
} 

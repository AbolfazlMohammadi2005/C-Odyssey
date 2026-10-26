#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool  a,b;
  a=true;
  b=false;
  printf("%d\n", (a || b ));
  printf("%d\n", (a && b ));

  return 0;
}

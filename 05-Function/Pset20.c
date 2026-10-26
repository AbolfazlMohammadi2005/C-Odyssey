#include <stdio.h>

int x=3;   // global

int main()
{
   int x=6; 
   printf("%d\n", x);
   {
      extern int x;
      printf("%d\n", x);
   }
   x =x + x;
   printf("%d\n", x);
    
   return 0;
}




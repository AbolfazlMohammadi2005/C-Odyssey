#include <stdio.h>

int main()
{
   int x=5;
   printf("%d\n", x);
   {
   	int x =1;
   	printf("inner=%d\n", x);
   	x++;
   }
   printf("%d\n", x);
    
   return 0;
}



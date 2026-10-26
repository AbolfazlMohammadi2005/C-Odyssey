#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter two numbers (a,b):");
   scanf("%d %d", &a, &b);
   if(a<b)
      printf("min=%d\n", a);
   else
      printf("min=%d\n", b);      
     
  return 0;
}




#include <stdio.h>

int main()
{
   int n[5] = {4, 3, 20, 9, 13};

   printf("   Element%13s%20s\n", "   Value", "Histogram");
   printf("........................................................\n");

   for (int i = 0; i <= 4; i++)
   {
      printf("%6d%14d", i, n[i]);
      
      for (int j = 0; j < n[i]; j++)
         if (j == 0)
            printf("%15s", "*");
         else
            printf("*");
               
      printf("\n");
   }

   return 0;
}
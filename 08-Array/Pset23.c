#include <stdio.h>

void mode(int [], int);

int main()
{
   enum { size = 15 };  
   int a[size] = {5, 1, 1, 8, 7, 1, 8, 0, 2, 9, 3, 1, 7, 7, 1};
   
   mode(a, size);
   
   return 0;
}

void mode(int a[], int len)
{
   int f[10] = {0};
   
   for(int i = 0; i < len; i++)
      ++f[a[i]];
   
   int max = f[0];
   int index = 0;
   
   for(int j = 1; j <= 9; j++)
   {
      if(f[j] > max)
      {
         max = f[j];
         index = j;
      }
   }
   
   printf("\nMode = %d", index);
   printf("\nFrequency = %d", max);
}
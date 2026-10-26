#include <stdio.h>

int binarySearch(const int [], int, int, int, int);
void p(const int [], int, int, int, int);

int main()
{
   enum { size = 7 };  
   int a[size] = {11, 22, 35, 44, 49, 88, 91};        
   int key;                  
   
   for(int i = 0; i < size; i++)
      printf("%d  ", a[i]);
      
   printf("\n Enter a number : ");
   scanf("%d", &key);
   printf("\n\n");
   
   for (int j = 0; j < size; j++)
      printf("%3d ", j);

   printf("\n");  

   for (int k = 1; k <= 4 * size; k++)
      printf("-");

   printf("\n");  
   
   int r = binarySearch(a, key, 0, size-1, size);

   if (r != -1)
      printf("\n found in element %d\n", r);
   else
      printf("\n not found\n");

   return 0;
} 

int binarySearch(const int b[], int k, int low, int high, int size)
{
   int middle;

   while (low <= high) {
      middle = (low + high) / 2;  
      p(b, low, middle, high, size);
      if (k == b[middle])  
         return middle;
      else if (k < b[middle])
         high = middle - 1;  
      else
         low = middle + 1;   
   }
   return -1;  
} 

void p(const int b[], int low, int mid, int high, int size)
{
   for (int m = 0; m < size; m++)
      if (m < low || m > high)
         printf("    ");
      else if (m == mid)          
         printf("%3d*", b[m]);  
      else
         printf("%3d ", b[m]);

   printf("\n"); 
}
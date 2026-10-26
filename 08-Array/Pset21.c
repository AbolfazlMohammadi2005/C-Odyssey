#include <stdio.h>

void mean(const int [], int);
void printArray(const int[], int);

int main()
{
   int size;
   
   printf("Enter array size: ");
   scanf("%d", &size);
   
   int a[size];
   
   printf("\nEnter %d numbers:\n", size);
   for(int i = 0; i < size; i++) {
      printf("a[%d]: ", i);
      scanf("%d", &a[i]);
   }
   
   printf("\n\nArray: ");
   printArray(a, size);  
   
   mean(a, size);
   
   return 0;
} 

void mean(const int x[], int len)
{
   int sum = 0;

   for(int i = 0; i < len; i++)
      sum += x[i];

   printf("\n\nMean = %.2f\n", (double)(sum) / len);
} 

void printArray(const int a[], int len)
{
   for(int i = 0; i < len; i++) {
      printf("%4d", a[i]);
   }
   printf("\n");
}
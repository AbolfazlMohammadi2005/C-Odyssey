#include <stdio.h>

void median(double [], int);
void sort(double [], int);
void print(const double [], int);

int main()
{
   int size;
   
   printf("Enter array size: ");
   scanf("%d", &size);
   
   double a[size];
   
   printf("\nEnter %d numbers (decimal allowed):\n", size);
   for(int i = 0; i < size; i++) {
      printf("a[%d]: ", i);
      scanf("%lf", &a[i]);
   }
   
   sort(a, size);
   printf("\nSorted array: ");
   print(a, size);
   
   median(a, size);
   
   return 0;
}

void median(double a[], int len)
{
   
   if(len % 2 == 1) {
      printf("\n\nMedian = %.2f", a[len / 2]);
   }
   else {
      double med = (a[len / 2 - 1] + a[len / 2]) / 2.0;
      printf("\n\nMedian = %.2f", med);
   }
}

void sort(double a[], int len)
{
   double hold;  
     
   for(int pass = 1; pass < len; pass++)
      for(int j = 0; j < len - 1; j++)
         if(a[j] > a[j + 1]) {
            hold = a[j];
            a[j] = a[j + 1];
            a[j + 1] = hold;
         }
}

void print(const double a[], int len)
{
   for(int i = 0; i < len; i++) {
      printf("%6.2f", a[i]);
   }
   printf("\n");
}
#include <stdio.h>
#include <string.h>

int main()
{
   int rowA, colA, colB;
   
   printf("Enter dimensions of matrix A (rows cols): ");
   scanf("%d %d", &rowA, &colA);
   
   printf("Enter columns of matrix B: ");
   scanf("%d", &colB);
   
   int a[rowA][colA];
   int b[colA][colB];
   int c[rowA][colB];
   memset(c, 0, sizeof(c));
   
   printf("\nEnter matrix A (%dx%d):\n", rowA, colA);
   for(int i = 0; i < rowA; i++)
      for(int j = 0; j < colA; j++) {
         printf("A[%d][%d]: ", i, j);
         scanf("%d", &a[i][j]);
      }
   
   printf("\nEnter matrix B (%dx%d):\n", colA, colB);
   for(int i = 0; i < colA; i++)
      for(int j = 0; j < colB; j++) {
         printf("B[%d][%d]: ", i, j);
         scanf("%d", &b[i][j]);
      }
   
   for(int i = 0; i < rowA; i++)
      for(int j = 0; j < colB; j++)
         for(int k = 0; k < colA; k++)
            c[i][j] += a[i][k] * b[k][j];
   
   printf("\nResult Matrix C:\n");
   for(int i = 0; i < rowA; i++) {
      for(int j = 0; j < colB; j++)
         printf("%6d", c[i][j]);
      printf("\n");
   }
   
   return 0;
}
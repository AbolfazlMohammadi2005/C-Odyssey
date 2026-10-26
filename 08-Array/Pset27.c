#include <stdio.h>

int maximum(int [][2], int, int);
double average(int [], int);

int main()
{
   int a[3][2] = {{13, 17}, {7, 18}, {15, 20}};

   printf("\n\n       [0]      [1]");

   for(int i = 0; i < 3; i++) 
   {
      printf("\n  [%d] ", i);
      for(int j = 0; j < 2; j++)
         printf("\t%d", a[i][j]);
   } 
  
   printf("\n\n\n\nHighest: %d\n\n", maximum(a, 3, 2));

   
   printf("Average: \n\n");
   for(int i = 0; i < 3; i++)
      printf("student %d = %.1f\n\n", i, average(a[i], 2));

   return 0;
} 

int maximum(int g[][2], int row, int col)
{
   int h = g[0][0];  

   for(int i = 0; i < row; i++)
      for(int j = 0; j < col; j++)
         if(g[i][j] > h)
            h = g[i][j];

   return h;
} 

double average(int b[], int len)
{
   int total = 0;

   for(int i = 0; i < len; i++)  
      total += b[i];

   return (double)(total) / len;  
}
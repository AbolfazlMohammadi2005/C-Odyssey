#include <stdio.h>

void print(int [][4], int);

int main()
{
   int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
   
   int n;
   printf("Enter (0, 1, 2): ");
   scanf("%d", &n);
   print(a, n);
   
   return 0;
}

void print(int a[][4], int n)
{
   for(int j = 0; j < 4; j++)
      printf("%d  ", a[n][j]);
}
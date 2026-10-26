#include <stdio.h>

void f(int [][ 2 ]);

int main()
{
   int a[ 3 ][ 2 ] = {{1,2} ,{3,4} ,{5,6}};
   int b[ 3 ][ 2 ] = {{1,2} ,{3} ,{5,6}};

   printf("array a:\n");
   f(a);

   printf("array b:\n");
   f(b);

   return 0;
} 

void f(int x[ ][ 2 ])
{
   for (int i = 0; i < 3; i++ ) 
   {    
      for (int j = 0; j < 2; j++ )   
         printf("%d ", x[ i ][ j ]);

      printf("\n\n");  
   } 
} 
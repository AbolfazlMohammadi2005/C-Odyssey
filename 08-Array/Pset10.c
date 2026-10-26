#include <stdio.h>

#define DEFINE_PRINT_ARRAY(T, FMT) \
void printArray_##T( const T b[],const int count ) \
{ \
   for ( int i = 0; i < count; i++ ) \
     printf(FMT " ", b[ i ]);   \
} 

DEFINE_PRINT_ARRAY(int, "%d")
DEFINE_PRINT_ARRAY(double, "%g")

#define printArray(b, count) _Generic((b), int *: printArray_int, double *: printArray_double)(b, count)

int main()
{
   int a[3] = {7 ,5 ,8} ;
   printf("Array a :  ");
   printArray(a ,3);  
   printf("\n\n");
   double  d[2]={4.5,2.8};
   printf("Array d : ");
   printArray(d ,2);  
   printf("\n\n");
   return 0;
} 

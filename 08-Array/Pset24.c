#include <stdio.h>

void s(void);
void a(void);

int main()
{
   printf("\nstatic:\n");
   s();
   s();
   s();
   printf("\n......................\n");
   
   printf("\n\nautomatic\n");
   a();
   a();
   a();
   
   return 0;
} 

void s(void)
{
   static int x[2] = {1, 2};  
  
   for(int j = 0; j <= 1; j++)
   {
      printf("x[%d] = %d  ", j, x[j]);
      ++x[j];
   }
   printf("\n");
} 

void a(void)
{
   int y[2] = {1, 2};
  
   for(int j = 0; j <= 1; j++)
   {
      printf("y[%d] = %d  ", j, y[j]);
      ++y[j];
   }
   printf("\n");
}
#include <stdio.h>

int main()
{
  int i;
    
  i=1;
  printf("%d", ++i); printf("   %d", ++i); printf("\n");
  
  i=1;
  printf("%d", ++i); printf("   %d", --i); printf("\n");
 
  i=1;
  printf("%d", i); printf("   %d", ++i); printf("\n");
  
  i=1;
  printf("%d", i); printf("   %d", i++); printf("\n");
   
  i=1;
  printf("%d", ++i); printf("   %d", i); printf("\n");
  
  i=1;
  printf("%d", ++i); printf("   %d", i++); printf("\n");
  
  i=1;
  printf("%d", i++); printf("   %d", ++i); printf("\n");
  
  i=1;
  printf("%d", i++); printf("   %d", ++i); printf("\n");
  
  i=1;
  printf("%d", i); printf("   %d", ++i); printf("   %d", ++i); printf("\n");
   
  i=1;
  printf("%d", ++i); printf("   %d", i++); printf("   %d", --i); printf("\n"); 
  
  i=1;
  printf("%d", i); printf("   %d", i++); printf("   %d", --i); printf("\n");
  
  i=1;
  printf("%d", ++i); printf("   %d", i++); printf("   %d", --i); printf("\n");
 
  return 0;
}
#include <stdio.h>

unsigned long fact(unsigned int );

int main()
{
  int n;
  printf("Enter n:");
  scanf("%d", &n);
  
  unsigned long y;
  y=fact(n);
  printf("Factorial %d is:%lu\n", n, y); 
   
  return 0;
}
unsigned long fact(unsigned int n)
{
 unsigned long f=1;
 for(int i=1 ; i<=n ; i++)	
     f=f*i;
  return f;     
}








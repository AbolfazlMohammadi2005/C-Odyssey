#define PI  3.141592653
#include <stdio.h>

int main()
{
  float r,A;
  
  printf("Enter the radius:\n");
  scanf("%f", &r);
  
  A=PI*r*r;
  printf("Area=%g\n", A);
  
  return 0;
}

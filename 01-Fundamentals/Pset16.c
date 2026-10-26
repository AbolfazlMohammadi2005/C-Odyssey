#include <stdio.h>

int main()
{
  int x,y;
  float ave;
  
  printf("Enter the x and y:\n");
  scanf("%d %d", &x, &y);
  
  ave=(float)(x+y)/2;
  
  printf("%g\n", ave);
  
  return 0;
}

#include <stdio.h>

int main()
{
  // 3!=1*2*3=6
  
  int n;
  printf("Enter n:");
  scanf("%d", &n);
  
  int f=1;
  for(int i=1 ; i<=n ; i++)
          f*=i;

  printf("Factorial %d is:%d\n", n, f);      
  
  return 0;
}
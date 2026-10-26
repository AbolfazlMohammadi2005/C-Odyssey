#include <stdio.h>

//  (1/1) - (1/2) + (1/3) - (1/4) + ....
float f(int);

int main()
{
 int n;
 printf("Enter n:");
 scanf("%d", &n);
 
 printf("%g\n", f(n));
 
 return 0;
}

float f(int n)
{
 float sum=0;
 float k=1;
 
 for(int i=1 ; i<=n ; i++)
 {
      sum+= k/i;
      k=-k;
 }
 return sum;
}
  
  

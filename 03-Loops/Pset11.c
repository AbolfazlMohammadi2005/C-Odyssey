#include <stdio.h>

int main()
{
  int n,a;
  int sum=0;
  
  printf("Enter n:");
  scanf("%d", &n);
  
  for(int i=1 ; i<=n ; i++)
      {
        printf("Number %d:", i);
		    scanf("%d", &a);
		    sum+=a;
      }
  
  printf("sum=%d\n", sum);
 
  return 0;
}
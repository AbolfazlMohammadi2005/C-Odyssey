#include <stdio.h>

int main()
{
  int a[3];
  int sum=0;
  
  for(int j=0;j<=2;j++)
      {
      	printf("a[%d]=", j);
      	scanf("%d", &a[j]);
      }
  
  for (int i=0;i<=2;i++)
      sum+=a[i];
  
  printf("sum=%d\n", sum);
   
  return 0;
    }
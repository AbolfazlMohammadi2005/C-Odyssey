#include <stdio.h>

int main()
{
  int a[3];
  for(int i=0;i<=2;i++)
  {
  	printf("a[%d]:", i);
    scanf("%d", &a[i]);
  }

  printf("\nreverse :\n");
  for(int j=2;j>=0;j--)   
    printf("%d  \n", a[j]);

  return 0;
}
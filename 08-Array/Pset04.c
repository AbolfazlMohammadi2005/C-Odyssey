#include <stdio.h>

int main()
{
  int a[10]={2,5,7,8,14,2,6,3,1,19};
  
  for(int i=0;i<=9;i++)
     if (a[i]%2 ==0)
        printf("%d  ", a[i]);
  
  printf("\n\n");
  
  for(int i=0;i<=9;i++)
     if (i%2 ==0)
      printf("%d  \n", a[i]);

  return 0;
}
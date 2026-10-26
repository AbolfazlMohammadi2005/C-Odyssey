#include <stdio.h>

int main()
{
  // 10+12+14+...+100=?
  int sum=0;
  int i;
  
  for(i=10;i<=100;i++)
     if(i%2==0)
        sum+=i;

  printf("sum is :%d\n", sum);      
      
  return 0;
}






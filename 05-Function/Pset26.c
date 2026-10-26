#include <stdio.h>

#define min(x,y) (x<y ? x:y)

int main()
{
   int a,b;
  printf("Enter a:");
  scanf("%d", &a);
  printf("---------------------------------\n");
  printf("Enter b:");
  scanf("%d", &b);
  printf("%d\n", min(a,b));
   
   return 0;
}





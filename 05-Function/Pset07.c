#include <stdio.h>

int max(int , int , int);

int main()
{
  int x,y,z;
  printf("Enter x:");
  scanf("%d", &x);
  printf("---------------------------------\n");
  printf("Enter y:");
  scanf("%d", &y);
  printf("---------------------------------\n");
  printf("Enter z:");
  scanf("%d", &z);
  printf("---------------------------------\n");
  printf("max=%d\n", max(x,y,z));
     
  return 0;
}
int max(int a , int b , int c)
{
	int m;
	/*m=a;
	if(b>m)
	   m=b;
    if(c>m)	   
     m=c;
     */
   m=(a>b)  ? a :  b;
   m=(c>m)  ? c :  m;
      
   return m;     
}





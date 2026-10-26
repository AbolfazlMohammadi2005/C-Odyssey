#include <stdio.h>

int sum(int [], int);

int main()
{
  int a[3]={6,3,5};
  printf("%d", sum(a,3));
    
  return 0;
} 

int sum(int a[], int c)
{
	if(c==1)
	  return a[0];
	return a[c-1] + sum(a,c-1);   
}

#include <stdio.h>

void rev(int [] ,int ,int);

int main()
{
  int a[3]={1,2,3};
  rev(a,0,3);
   
   return 0;
} 
void rev(int a[] ,int k ,int len)
{
	if(k<len)
	{
		printf("%d  \n", a[k]); 
		rev(a,k+1,len);
    }
		
}
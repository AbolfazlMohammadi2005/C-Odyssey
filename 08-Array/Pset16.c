#include <stdio.h>

void print(int [] ,int );
void rev(int [] ,int );

int main()
{
    enum { size = 8 };
	int a[size]={1,2,3,4,5,6,7,8};
	
    rev(a,size);
    print(a,size);
  
   return 0;
} 

void rev(int a[] ,int c)
{
  int temp;
 
  for(int i=0; i<c/2 ; i++)   
    {
    	temp=a[i];
    	a[i]=a[c-1-i];
    	a[c-1-i]=temp;
    }
}
    
void print(int a[] ,int c)
{
 for(int i=0 ; i<c; i++)
    printf("%d \n", a[i]);
}
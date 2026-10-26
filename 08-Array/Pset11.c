#include <stdio.h>

void read (int [] ,int);
void print(int [] ,int);

int main()
{
   int a[5];
   
   read(a,5);
   
   print(a,5);   
   
return 0;

} 

void read(int a[] ,int c)
{
  for(int i=0;i<c;i++)
      {
      	printf("a[%d]=", i);
      	scanf("%d", &a[i]);
      }
}

void print(int a[] ,int c)
{
  for(int j=0; j<c; j++)      
       printf("%d\n", a[j]);
}



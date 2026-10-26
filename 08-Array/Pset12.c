#include <stdio.h>

void read(int [] ,int *);
void print(int [] ,int);

int main()
{
   int a[5];
   int c=0;
   
   read(a,&c);
   
   print(a,c);   
   
  return 0;

} 

void read(int a[] ,int *c)
{
  *c=0;	
  do{
      printf("a[%d]=", *c);
      scanf("%d", &a[*c]);

    }while(a[(*c)++]!=0 && *c<5);
   --*c;      
}

void print(int a[] ,int c)
{
  for(int j=0; j<c; j++)      
      printf("%d\n", a[j]);
}



#include <stdio.h>

int search(int [] ,int ,int ); 

int main()
{
   enum { size = 10 };	 
   int a[size]={19,8,25,4,7,1,-4,13,2,7};
   int key;
   
   printf("Array:");
   for(int i=0; i<size ;i++)
      printf("%d  ", a[i]);
       
   printf("\nEnter key:");
   scanf("%d", &key);
   
   int k;
   k=search(a,size,key);
   if(k==-1) 
     printf("not found\n");
   else
    printf("found in element: %d\n", k);
      
   return 0;
} 

int search(int a[] ,int len ,int key)
{
	for(int i=0 ; i<len ; i++)
	  if (a[i]== key)
	      return i;
   
    return -1;	      
}
#include <stdio.h>

void sort(int [] , int);

int main()
{
   enum { size = 10 };  
   int a[size] = { 9,5,3,1,7,4,1,2,6,7};
  
   sort(a,size);
   
   for (int i = 0; i < size; i++)
      printf("%d\t", a[i]);

   return 0;
} 

void sort(int a[] , int len)
{
   int hold;
    
   for (int p = 0; p < len - 1; p++)
      for (int j = 0; j < len - 1; j++)  
         if (a[j] > a[j+1])
         {      
            hold = a[j];        
            a[j] = a[j+1]; 
            a[j+1] = hold;  
         } 
}
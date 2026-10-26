#include <stdio.h>

int bsearch(int [], int, int, int, int);

int main()
{
   enum { size = 10 };	
   int a[size] = {12, 15, 18, 39, 67, 89, 90, 100, 200, 300};
   
   printf(" array:  ");
   for(int i = 0; i < size; i++)
      printf("%d  ", a[i]);
   
   int key;      
   printf("\n\n enter key: ");
   scanf("%d", &key);
   
   int p;
   p = bsearch(a, size, key, 0, size-1);
   if(p == -1)
     printf("not found :\n");
   else
     printf(" found in element:%d\n", p);
   
   return 0;
} 

int bsearch(int a[], int len, int k, int low, int high)
{
   int mid;
   while(low <= high)	
   {
      mid = (low + high) / 2;
      if(a[mid] == k)
         return mid;
      else if(k < a[mid])
         high = mid - 1;
      else
         low = mid + 1;
   }
   return -1;
}
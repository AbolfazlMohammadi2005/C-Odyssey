#include <stdio.h>

int main()
{
   int a[15] ={1,3,8,5,1,9,8,1,4,0,1,3,8,9,6};
   int f[10] ={0};
   
   for(int i=0;i<=14 ; i++)
       ++f[a[i]];
    
   printf("j\tfrequence\n");
   printf("------------------------\n");
    
   for(int j=0;j<=9;j++)          
     printf("%d\t%d\n", j, f[j]);
      
     return 0;
}
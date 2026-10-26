#include <stdio.h>  

int main () 
{  
    int num;  
    printf("Enter a Number: ");  
    scanf("%d", &num); 
     
    if (num % 2 == 0)    
        printf("It is even number\n");    
    else  
        printf("It is odd number\n");

   return 0;  
} 

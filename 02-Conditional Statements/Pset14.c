#include <stdio.h>  

int main () 
{  
    int num1, num2, num3, max;  
    printf("Enter First Number: ");  
    scanf("%d", &num1);
    printf("Enter Second Number: ");  
    scanf("%d", &num2); 
    printf("Enter Third Number: ");  
    scanf("%d", &num3);
    max = num1;
    if (num2 > max)    
        max = num2;    
    if  (num3 > max) 
    max = num3;   
    printf("The maximum number is: %d\n", max);
        
   return 0;  
}
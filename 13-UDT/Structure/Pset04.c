#include <stdio.h>

#define SIZE 3

typedef struct part {  
    int modelnumber;              
    float cost;                   
} part;  

int main() {  
    int n;  
    part a[SIZE];
    
    for(n = 0; n < SIZE; n++) {  
        printf("\n");  
        printf("Enter model number: ");  
        scanf("%d", &a[n].modelnumber);
        
        printf("Enter cost: ");  
        scanf("%f", &a[n].cost);       
    }  
    
    for(n = 0; n < SIZE; n++) {  
        printf(" Model %d", a[n].modelnumber);  
        printf(" Cost %g\n", a[n].cost);  
    }  
    
    return 0;
}
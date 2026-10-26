#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(0));

    int min, max, count;
    
    printf("Enter minimum value: ");
    scanf("%d", &min);
    printf("Enter maximum value: ");
    scanf("%d", &max);
    printf("How many random numbers? ");
    scanf("%d", &count);

    if(min > max) {
        int temp = min;
        min = max;
        max = temp;
        printf("(Swapped: min=%d, max=%d)\n", min, max);
    }
   
    
    printf("Random numbers: ");
    for(int i = 0; i < count; i++) {
        
        int randomNumber = (rand() % (max - min + 1)) + min;
        printf("%d ", randomNumber);
    }
    printf("\n");
    
    return 0;
}
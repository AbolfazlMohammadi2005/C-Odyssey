#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    srand(time(0));
    
    int min, max;
    printf("Enter minimum value: ");
    scanf("%d", &min);
    printf("Enter maximum value: ");
    scanf("%d", &max);
    
    // Check if user entered min > max
    if(min > max) {
        int temp = min;
        min = max;
        max = temp;
        printf("(Swapped: min=%d, max=%d)\n", min, max);
    }
    
    int randomNumber = (rand() % (max - min + 1)) + min;
    
    printf("Random number between %d and %d: %d\n", min, max, randomNumber);
    
    return 0;
}
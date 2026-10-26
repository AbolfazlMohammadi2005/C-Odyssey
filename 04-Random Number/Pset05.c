#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(0));

    double min, max;
    int count;
    
    printf("Enter minimum value: ");
    scanf("%lf", &min);
    printf("Enter maximum value: ");
    scanf("%lf", &max);
    printf("How many random numbers? ");
    scanf("%d", &count);

    if(min > max) {
        double temp = min;
        min = max;
        max = temp;
        printf("(Swapped: min=%g, max=%g)\n", min, max);
    }
   
    
    
    printf("Random numbers: ");
    for(int i = 0; i < count; i++) {
        double randomNumber = min + (max - min) * rand() / (double)RAND_MAX;
        printf("%.3f ", randomNumber);
    }
    printf("\n");
    
    return 0;
}
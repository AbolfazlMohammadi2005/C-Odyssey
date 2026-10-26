#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(0));

    double probability;
    int count;
    
    printf("Enter probability value: ");
    scanf("%lf", &probability);
    printf("How many random numbers? ");
    scanf("%d", &count);
    
    
    printf("Random numbers: ");
    for(int i = 0; i < count; i++) {
        double randomNumber = (rand() / (double)RAND_MAX) < probability;
        printf("%g ", randomNumber);
    }
    printf("\n");
    
    return 0;
}
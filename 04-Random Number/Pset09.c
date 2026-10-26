#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(0));

    double trials, probability;
    int count;
    
    printf("Enter trials value: ");
    scanf("%lf", &trials);
    printf("Enter probability value: ");
    scanf("%lf", &probability);
    printf("How many random numbers? ");
    scanf("%d", &count);
    
    
    printf("Random numbers: ");
    for(int i = 0; i < count; i++) {
        int successes = 0;
        for(int j = 0; j < (int)trials; j++) {
            if(rand() / (double)RAND_MAX < probability)
                successes++;
        }
        double randomNumber = successes;
        printf("%g ", randomNumber);
    }
    printf("\n");
    
    return 0;
}
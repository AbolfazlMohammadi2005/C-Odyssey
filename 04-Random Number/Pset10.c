#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(0));

    double lambda;
    int count;
    
    printf("Enter lambda value: ");
    scanf("%lf", &lambda);
    printf("How many random numbers? ");
    scanf("%d", &count);
    

    printf("Random numbers: ");
    for(int i = 0; i < count; i++) {
        double randomNumber = -log(1.0 - rand() / (RAND_MAX + 1.0)) / lambda;
        printf("%.3f ", randomNumber);
    }
    printf("\n");
    
    return 0;
}
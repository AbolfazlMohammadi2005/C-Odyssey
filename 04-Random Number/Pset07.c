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
        double L = exp(-lambda);
        double product = 1.0;
        int k = 0;
        do {
            k++;
            product *= rand() / (double)RAND_MAX;
        } while(product > L);
        double randomNumber = k - 1;
        printf("%g ", randomNumber);
    }
    printf("\n");
    
    return 0;
}
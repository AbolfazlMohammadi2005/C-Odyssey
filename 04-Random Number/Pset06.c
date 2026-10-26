#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(0));

    double mean, stddev;
    int count;
    
    printf("Enter mean value: ");
    scanf("%lf", &mean);
    printf("Enter stddev value: ");
    scanf("%lf", &stddev);
    printf("How many random numbers? ");
    scanf("%d", &count);

    if(mean > stddev) {
        double temp = mean;
        mean = stddev;
        stddev = temp;
        printf("(Swapped: mean=%g, stddev=%g)\n", mean, stddev);
    }
   
    
    
    printf("Random numbers: ");
    for(int i = 0; i < count; i++) {
        double randomNumber = mean + stddev * sqrt(-2.0 * log((rand() + 1.0) / (RAND_MAX + 2.0))) * cos(2 * 3.14159265358979323846 * (rand() + 1.0) / (RAND_MAX + 2.0));
        printf("%.3f ", randomNumber);
    }
    printf("\n");
    
    return 0;
}
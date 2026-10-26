#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    
    printf("abs: %d\n", abs(x));
    printf("fabs: %g\n", fabs(x));
    printf("ceil: %g\n", ceil(x));
    printf("floor: %g\n", floor(x));
    printf("round: %g\n", round(x));
    printf("trunc: %g\n", trunc(x));
    printf("rint: %g\n", rint(x));
    
    return 0;
}
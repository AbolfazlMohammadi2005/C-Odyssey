#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    
    printf("\n========== GAMMA FUNCTIONS ==========\n");
    printf("tgamma(%g) = %g\n", x, tgamma(x));
    printf("lgamma(%g) = %g\n", x, lgamma(x));
    
    printf("\n========== ERROR FUNCTIONS ==========\n");
    printf("erf(%g) = %g\n", x, erf(x));
    printf("erfc(%g) = %g\n", x, erfc(x));
    
    return 0;
}
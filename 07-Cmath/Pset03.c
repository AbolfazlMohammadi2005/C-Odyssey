#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    
    printf("\n========== POWER AND ROOT ==========\n");
    double exponent;
    printf("Enter exponent for pow: ");
    scanf("%lf", &exponent);
    printf("pow(%g, %g) = %g\n", x, exponent, pow(x, exponent));
    printf("sqrt(%g) = %g\n", x, sqrt(x));
    printf("cbrt(%g) = %g\n", x, cbrt(x));
    
    printf("\n========== EXPONENTIAL ==========\n");
    printf("exp(%g) = %g\n", x, exp(x));
    printf("exp2(%g) = %g\n", x, exp2(x));
    printf("expm1(%g) = %g\n", x, expm1(x));
    
    printf("\n========== LOGARITHMS ==========\n");
    printf("log(%g) = %g\n", x, log(x));
    printf("log10(%g) = %g\n", x, log10(x));
    printf("log2(%g) = %g\n", x, log2(x));
    printf("log1p(%g) = %g\n", x, log1p(x));
    printf("logb(%g) = %g\n", x, logb(x));
    printf("ilogb(%g) = %d\n", x, ilogb(x));
    
    printf("\n========== CUSTOM BASE LOGARITHM ==========\n");
    double base;
    printf("Enter base for logarithm: ");
    scanf("%lf", &base);
    printf("log_%g(%g) = %g\n", base, x, log(x) / log(base));
    
    return 0;
}
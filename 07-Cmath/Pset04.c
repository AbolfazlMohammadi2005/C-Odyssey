#include <stdio.h>
#include <math.h>

int main() {
    double x, y;
    printf("Enter first number (x): ");
    scanf("%lf", &x);
    printf("Enter second number (y): ");
    scanf("%lf", &y);
    
    printf("\n========== MINIMUM & MAXIMUM ==========\n");
    printf("fmax(%g, %g) = %g\n", x, y, fmax(x, y));
    printf("fmin(%g, %g) = %g\n", x, y, fmin(x, y));
    
    printf("\n========== HYPOTENUSE ==========\n");
    printf("hypot(%g, %g) = %g\n", x, y, hypot(x, y));
    
    return 0;
}
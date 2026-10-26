#include <stdio.h>
#include <math.h>

int main() {
    double degrees;
    printf("Enter angle in degrees: ");
    scanf("%lf", &degrees);
    
    
    printf("\n========== TRIGONOMETRIC ==========\n");
    printf("sin(%g) = %g\n", degrees, sin(degrees));
    printf("cos(%g) = %g\n", degrees, cos(degrees));
    printf("tan(%g) = %g\n", degrees, tan(degrees));
    printf("cot(%g) = %g\n", degrees, 1.0 / tan(degrees));
    
    printf("\n========== INVERSE TRIGONOMETRIC ==========\n");
    printf("asin(%g) = %g rad\n", sin(degrees), asin(sin(degrees)));
    printf("acos(%g) = %g rad\n", cos(degrees), acos(cos(degrees)));
    printf("atan(%g) = %g rad\n", tan(degrees), atan(tan(degrees)));
    printf("acot(%g) = %g rad\n", 1.0/tan(degrees), atan(1.0/(1.0/tan(degrees))));
    
    printf("\n========== HYPERBOLIC ==========\n");
    printf("sinh(%g) = %g\n", degrees, sinh(degrees));
    printf("cosh(%g) = %g\n", degrees, cosh(degrees));
    printf("tanh(%g) = %g\n", degrees, tanh(degrees));
    printf("coth(%g) = %g\n", degrees, 1.0 / tanh(degrees));
    
    printf("\n========== INVERSE HYPERBOLIC ==========\n");
    printf("asinh(%g) = %g\n", sinh(degrees), asinh(sinh(degrees)));
    printf("acosh(%g) = %g\n", cosh(degrees), acosh(cosh(degrees)));
    printf("atanh(%g) = %g\n", tanh(degrees), atanh(tanh(degrees)));
    printf("acoth(%g) = %g\n", 1.0/tanh(degrees), atanh(1.0/(1.0/tanh(degrees))));
    
     printf("\n========== ATAN2 (x,y to angle) ==========\n");
    double q, p;
    printf("Enter q: ");
    scanf("%lf", &q);
    printf("Enter p: ");
    scanf("%lf", &p);
    printf("atan2(%g, %g) = %g rad\n", p, q, atan2(q, p));
    printf("atan2(%g, %g) in degrees = %g°\n", p, q, atan2(q, p) * 180 / M_PI);
    
    return 0;
}
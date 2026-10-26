#include <stdio.h>
#include <math.h>

void f(double, double, double);

int main() {
    double a, b, c;
    
    printf("=================================\n");
    printf("     QUADRATIC EQUATION SOLVER    \n");
    printf("        ax^2 + bx + c = 0         \n");
    printf("=================================\n");
    
    printf("\nEnter a: ");
    scanf("%lf", &a);
    printf("---------------------------------\n");
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("---------------------------------\n");
    printf("Enter c: ");
    scanf("%lf", &c);
    printf("---------------------------------\n");
    
    f(a, b, c);
    
    return 0;
}

void f(double a, double b, double c) {
    double root1, root2, Delta;
    
    if (a != 0) {
        Delta = b * b - 4 * a * c;
        
        if (Delta > 0) {
            root1 = (-b + sqrt(Delta)) / (2 * a);
            root2 = (-b - sqrt(Delta)) / (2 * a);
            printf("\nTwo real roots:\n");
            printf("root1 = %g\n", root1);
            printf("root2 = %g\n", root2);
        }
        else if (Delta == 0) {
            root1 = -b / (2 * a);
            printf("\nOne real root (double root):\n");
            printf("root = %g\n", root1);
        }
        else {
            double realPart = -b / (2 * a);
            double imagPart = sqrt(-Delta) / (2 * a);
            printf("\nTwo complex roots:\n");
            printf("root1 = %g + %gi\n", realPart, imagPart);
            printf("root2 = %g - %gi\n", realPart, imagPart);
        }
    }
    else if (b != 0) {
        root1 = -c / b;
        printf("\nLinear equation (a=0):\n");
        printf("root = %g\n", root1);
    }
    else if (c != 0) {
        printf("\nNo solution (0 = %g)\n", c);
    }
    else {
        printf("\nInfinite solutions (identity)\n");
    }
}
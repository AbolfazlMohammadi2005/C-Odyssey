#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void solveQuadratic(double*, double*, double*);
void solveLinear(double*, double*);
void getCoefficients(double*, double*, double*);
void displayEquation(double*, double*, double*);

int main()
{
    double* a = malloc(sizeof(double));
    double* b = malloc(sizeof(double));
    double* c = malloc(sizeof(double));

    getCoefficients(a, b, c);
    displayEquation(a, b, c);

    if (*a == 0)
    {
        solveLinear(b, c);
    }
    else
    {
        solveQuadratic(a, b, c);
    }

    free(a);
    free(b);
    free(c);

    return 0;
}

void getCoefficients(double* a, double* b, double* c)
{
    printf("Quadratic Equation Solver: ax^2 + bx + c = 0\n");
    printf("\nEnter coefficient a: ");
    scanf("%lf", a);
    printf("Enter coefficient b: ");
    scanf("%lf", b);
    printf("Enter coefficient c: ");
    scanf("%lf", c);
}

void displayEquation(double* a, double* b, double* c)
{
    printf("\nEquation: %.4fx^2 + %.4fx + %.4f = 0\n", *a, *b, *c);
}

void solveLinear(double* b, double* c)
{
    if (*b == 0)
    {
        if (*c == 0)
            printf("\nInfinite solutions (identity equation).\n");
        else
            printf("\nNo solution (contradiction).\n");
    }
    else
    {
        double x = -*c / *b;
        printf("\nLinear equation solution: x = %.4f\n", x);
    }
}

void solveQuadratic(double* a, double* b, double* c)
{
    double* discriminant = malloc(sizeof(double));
    *discriminant = (*b) * (*b) - 4 * (*a) * (*c);

    if (*discriminant > 0)
    {
        double* sqrtD = malloc(sizeof(double));
        double* x1 = malloc(sizeof(double));
        double* x2 = malloc(sizeof(double));

        *sqrtD = sqrt(*discriminant);
        *x1 = (-*b + *sqrtD) / (2 * *a);
        *x2 = (-*b - *sqrtD) / (2 * *a);

        printf("\nTwo distinct real roots:\n");
        printf("x1 = %.4f\n", *x1);
        printf("x2 = %.4f\n", *x2);

        free(sqrtD);
        free(x1);
        free(x2);
    }
    else if (*discriminant == 0)
    {
        double* x = malloc(sizeof(double));
        *x = -*b / (2 * *a);

        printf("\nOne real double root:\n");
        printf("x = %.4f\n", *x);

        free(x);
    }
    else
    {
        double* realPart = malloc(sizeof(double));
        double* imagPart = malloc(sizeof(double));

        *realPart = -*b / (2 * *a);
        *imagPart = sqrt(-*discriminant) / (2 * *a);

        printf("\nTwo complex conjugate roots:\n");
        printf("x1 = %.4f + %.4fi\n", *realPart, *imagPart);
        printf("x2 = %.4f - %.4fi\n", *realPart, *imagPart);

        free(realPart);
        free(imagPart);
    }

    free(discriminant);
}
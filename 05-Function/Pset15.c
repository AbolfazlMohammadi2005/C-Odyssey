#include <stdio.h>
#include <math.h>

double f(double);
double distance(double, double, double, double);

int main() {
    double x1, y1, x2, y2;
    
    printf("=================================\n");
    printf("     DISTANCE CALCULATOR          \n");
    printf("=================================\n");
    
    printf("\nEnter point A (x y): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Enter point B (x y): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("---------------------------------\n");
    printf("Distance between A and B: %g\n", distance(x1, y1, x2, y2));
    printf("---------------------------------\n");
    
    return 0;
}

double f(double n) {
    return n * n;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(f(x2 - x1) + f(y2 - y1));
}
#include <stdio.h>

float area(float);
float volume(float, float);

int main() {
    float r, h;
    
    printf("=================================\n");
    printf("     CYLINDER CALCULATOR          \n");
    printf("=================================\n");
    
    printf("\nEnter radius (r): ");
    scanf("%f", &r);
    
    printf("Enter height (h): ");
    scanf("%f", &h);
    
    printf("---------------------------------\n");
    printf("Area of base: %g\n", area(r));
    printf("Volume of cylinder: %g\n", volume(r, h));
    printf("---------------------------------\n");
    
    return 0;
}

float area(float r) {
    return 3.1415 * r * r;
}

float volume(float r, float h) {
    return area(r) * h;
}
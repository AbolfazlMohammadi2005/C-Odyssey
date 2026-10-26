#include <stdio.h>

#define DEFINE_ADD(T) \
T add_##T(T a, T b) \
{ \
    return a + b; \
}

#define DEFINE_MAX(T) \
T max_##T(T a, T b) { \
    return (a > b) ? a : b; \
}

#define DEFINE_MIN(T) \
T min_##T(T a, T b) { \
    return (a < b) ? a : b; \
}

#define DEFINE_SWAP(T) \
void swap_##T(T *a, T *b) { \
    T temp = *a; \
    *a = *b; \
    *b = temp; \
}

DEFINE_ADD(int)
DEFINE_ADD(double)
DEFINE_MAX(int)
DEFINE_MAX(double)
DEFINE_MIN(int)
DEFINE_MIN(double)
DEFINE_SWAP(int)
DEFINE_SWAP(double)

#define add(a, b) _Generic((a), int: add_int, double: add_double)(a, b)
#define max(a, b) _Generic((a), int: max_int, double: max_double)(a, b)
#define min(a, b) _Generic((a), int: min_int, double: min_double)(a, b)
#define swap(a, b) _Generic((a), int *: swap_int, double *: swap_double)(a, b)

int multiply_int_double(int a, double b) {
    return a * b;
}

int main() {
    int x, y;
    double a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("add: %d\n", add(x, y));
    printf("max: %d\n", max(x, y));
    printf("min: %d\n", min(x, y));
    printf("before swap: %d, %d\n", x, y);
    swap(&x, &y);
    printf("after swap: %d, %d\n", x, y);
    
    printf("\nEnter two doubles: ");
    scanf("%lf %lf", &a, &b);
    printf("add: %g\n", add(a, b));
    printf("max: %g\n", max(a, b));
    printf("min: %g\n", min(a, b));
    printf("before swap: %g, %g\n", a, b);
    swap(&a, &b);
    printf("after swap: %g, %g\n", a, b);
    
    int p;
    double q;
    printf("\nEnter integer and double for multiply: ");
    scanf("%d %lf", &p, &q);
    printf("result: %d\n", multiply_int_double(p, q));
    
    return 0;
}
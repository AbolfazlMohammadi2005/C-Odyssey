#include <stdio.h>
#include <stdbool.h>

#define DEFINE_ABSOLUTE(T) \
T absolute_##T(T value) \
{ \
    if(value < 0) { \
        return -value; \
    } \
    return value; \
}

#define DEFINE_POWER(T) \
T power_##T(T base, int exponent) \
{ \
    T result = 1; \
    for(int i = 0; i < exponent; i++) { \
        result = result * base; \
    } \
    return result; \
}

#define DEFINE_SUM_OF_ARRAY(T) \
T sumOfArray_##T(T arr[], int size) \
{ \
    T sum = 0; \
    for(int i = 0; i < size; i++) { \
        sum = sum + arr[i]; \
    } \
    return sum; \
}

#define DEFINE_AVERAGE(T) \
T average_##T(T arr[], int size) \
{ \
    if(size == 0) { \
        return 0; \
    } \
    return sumOfArray_##T(arr, size) / size; \
}

#define DEFINE_FACTORIAL(T) \
T factorial_##T(T n) \
{ \
    T result = 1; \
    for(T i = 2; i <= n; i++) { \
        result = result * i; \
    } \
    return result; \
}

#define DEFINE_CLAMP(T) \
T clamp_##T(T value, T low, T high) \
{ \
    if(value < low) return low; \
    if(value > high) return high; \
    return value; \
}

#define DEFINE_IS_EQUAL(T) \
bool isEqual_##T(T a, T b) \
{ \
    return a == b; \
}

#define DEFINE_SQUARE(T) \
T square_##T(T value) { \
    return value * value; \
}

#define DEFINE_ALL(T) \
DEFINE_ABSOLUTE(T) \
DEFINE_POWER(T) \
DEFINE_SUM_OF_ARRAY(T) \
DEFINE_AVERAGE(T) \
DEFINE_FACTORIAL(T) \
DEFINE_CLAMP(T) \
DEFINE_IS_EQUAL(T) \
DEFINE_SQUARE(T)

DEFINE_ALL(int)
DEFINE_ALL(double)

#define absolute(value) _Generic((value), int: absolute_int, double: absolute_double)(value)
#define power(base, exponent) _Generic((base), int: power_int, double: power_double)(base, exponent)
#define sumOfArray(arr, size) _Generic((arr), int *: sumOfArray_int, double *: sumOfArray_double)(arr, size)
#define average(arr, size) _Generic((arr), int *: average_int, double *: average_double)(arr, size)
#define factorial(n) _Generic((n), int: factorial_int, double: factorial_double)(n)
#define clamp(value, low, high) _Generic((value), int: clamp_int, double: clamp_double)(value, low, high)
#define isEqual(a, b) _Generic((a), int: isEqual_int, double: isEqual_double)(a, b)
#define square(value) _Generic((value), int: square_int, double: square_double)(value)

int main() {
    int x, exponent;
    printf("Enter integer and exponent: ");
    scanf("%d %d", &x, &exponent);
    printf("power: %d\n", power(x, exponent));
    printf("square: %d\n", square(x));
    printf("absolute of -%d: %d\n", x, absolute(-x));
    printf("factorial of %d: %d\n", x, factorial(x));
    
    double a, b, low, high;
    printf("\nEnter two doubles: ");
    scanf("%lf %lf", &a, &b);
    printf("isEqual: %d\n", isEqual(a, b));
    
    printf("Enter low and high for clamp: ");
    scanf("%lf %lf", &low, &high);
    printf("clamp(%g, %g, %g) = %g\n", a, low, high, clamp(a, low, high));
    
    int size;
    printf("\nEnter array size: ");
    scanf("%d", &size);
    double arr[100];
    printf("Enter %d numbers: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%lf", &arr[i]);
    }
    printf("sum: %g\n", sumOfArray(arr, size));
    printf("average: %g\n", average(arr, size));
    
    return 0;
}
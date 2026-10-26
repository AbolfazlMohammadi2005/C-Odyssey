#include <stdio.h>

int fibo(int);

int main() {
    int n;
    
    printf("=================================\n");
    printf("     FIBONACCI CALCULATOR         \n");
    printf("=================================\n");
    
    printf("\nEnter n: ");
    scanf("%d", &n);
    
    printf("---------------------------------\n");
    printf("Fibonacci(%d) = %d\n", n, fibo(n));
    printf("---------------------------------\n");
    
    return 0;
}

int fibo(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}
#include <stdio.h>

int *f(int);
int x[2];

int main()
{
    *f(1) = 5;
    *f(2) = 8;

    printf("%d", x[0]);
    printf("%d", x[1]);

    return 0;
}

int *f(int n)
{
    return &x[n - 1];
}
#include <stdio.h>

int f(int (*)(int, int), int, int);
int sum(int, int);
int prod(int, int);

int main()
{
    printf("%d", f(sum, 2, 3));
    printf("\n");
    printf("%d", f(prod, 2, 3));
    printf("\n");

    return 0;
}

int f(int (*p)(int, int), int c, int d)
{
    return (*p)(c, d);
}

int sum(int a, int b)
{
    return a + b;
}

int prod(int a, int b)
{
    return a * b;
}
#include <stdio.h>

int sum(int, int);
int prod(int, int);

int main()
{
    int (*p)(int, int);

    p = sum;
    printf("%d\n", p(6, 2));

    p = prod;
    printf("%d\n", p(6, 2));

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int prod(int a, int b)
{
    return a * b;
}
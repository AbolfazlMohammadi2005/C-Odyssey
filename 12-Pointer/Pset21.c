#include <stdio.h>

void f(int *);

int main()
{
    int a = 2;
    f(&a);
    printf("%d\n", a);

    return 0;
}

void f(int *n)
{
    *n = *n + 3;
}
#include <stdio.h>

void f(int *);

int main()
{
    int a = 5;

    f(&a);

    printf("%d\n", a);

    return 0;
}

void f(int *r)
{
    (*r)++;
}
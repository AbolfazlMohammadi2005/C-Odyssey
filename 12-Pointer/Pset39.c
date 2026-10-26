#include <stdio.h>

int *f(int i);
int a[3] = {1, 2, 3};

int main()
{
    *f(1) = 5;

    printf("%d\n", a[0]);
    printf("%d\n", a[1]);
    printf("%d\n", a[2]);

    return 0;
}

int *f(int i)
{
    return &a[i];
}
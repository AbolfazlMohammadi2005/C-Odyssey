#include <stdio.h>

int f1(int);
int f2(int);

int main()
{
    int (*p)(int);

    p = f1;
    printf("%d\n", p(3));

    p = f2;
    printf("%d\n", p(3));

    return 0;
}

int f1(int a)
{
    return a * a;
}

int f2(int b)
{
    return b * b * b;
}
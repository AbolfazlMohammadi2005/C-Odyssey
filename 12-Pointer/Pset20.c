#include <stdio.h>

int square(int);
int cube(int);
int sum(int (*)(int), int);

int main()
{
    printf("%d", sum(square, 3));
    printf("\n");
    printf("%d", sum(cube, 2));
    printf("\n");

    return 0;
}

int square(int n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}

int sum(int (*p)(int), int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += p(i);
    return s;
}
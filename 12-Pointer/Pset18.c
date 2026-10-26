#include <stdio.h>

int sum(int, int);
int prod(int, int);

int main()
{
    int (*p[2])(int, int) = {sum, prod};

    printf("%d\n", (*p[0])(2, 3));
    printf("%d\n", (*p[1])(2, 3));

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
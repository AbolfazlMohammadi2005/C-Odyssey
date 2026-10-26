#include <stdio.h>

int *min(int *, int *);

int main()
{
    int x = 3;
    int y = 5;

    *min(&x, &y) = 8;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", *min(&x, &y));

    return 0;
}

int *min(int *a, int *b)
{
    return (*a < *b) ? a : b;
}
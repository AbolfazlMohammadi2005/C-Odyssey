#include <stdio.h>

int *min(int*, int*);

int main()
{
    int x1 = 6;
    int x2 = 4;

    ++*min(&x1, &x2);
    printf("%d\n", x1);
    printf("%d\n", x2);

    ++*min(&x1, &x2);
    printf("%d\n", x1);
    printf("%d\n", x2);

    *min(&x1, &x2) = 9;
    printf("%d\n", x1);
    printf("%d\n", x2);

    *min(&x1, &x2) += 4;
    printf("%d\n", x1);
    printf("%d\n", x2);

    return 0;
}

int *min(int* a, int* b)
{
    return *a <= *b ? a : b;
}
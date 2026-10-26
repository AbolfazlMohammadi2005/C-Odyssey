#include <stdio.h>

int main()
{
    int a[2] = {1, 2};
    int b[3] = {3, 4, 5};

    int *p[] = {a, b};

    printf("%d\n", *(p[0]));
    printf("%d\n", *(p[0] + 1));

    printf("%d\n", *(p[1]));
    printf("%d\n", *(p[1] + 1));
    printf("%d\n", *(p[1] + 2));

    printf("\n\n-----------------------\n\n\n");

    printf("%d\n", *(*p));
    printf("%d\n", *(*p + 1));

    printf("%d\n", *(*(p + 1)));
    printf("%d\n", *(*(p + 1) + 1));
    printf("%d\n", *(*(p + 1) + 2));

    return 0;
}
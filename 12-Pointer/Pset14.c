#include <stdio.h>

int main()
{
    int a[2][3] = {11, 12, 13, 14, 15, 16};

    int (*p)[3];

    p = a;

    printf("%d\n", *(*p + 5));
    printf("%d\n", *(*(p + 1) + 2));

    return 0;
}
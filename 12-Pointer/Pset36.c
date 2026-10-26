#include <stdio.h>

int main()
{
    int a = 3;
    int *r = &a;

    a = 5;
    printf("%d\n", *r);

    int b = 8;
    *r = b;
    printf("%d\n", *r);

    printf("%d\n", a);

    (*r)++;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", *r);

    return 0;
}
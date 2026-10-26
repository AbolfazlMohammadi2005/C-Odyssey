#include <stdio.h>

int main()
{
    int a = 1;
    int *r1 = &a;
    int *p = &a;
    int *r2 = p;

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", *r1);
    printf("%d\n", *r2);

    *r1 = 5;

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", *r1);
    printf("%d\n", *r2);

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 3;
    double d = 2.5;

    void *p;

    p = &a;
    printf("%d\n", *(int *)p);

    p = &d;
    printf("%g\n", *(double *)p);

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 3;

    int *r = &a;
    int *p = &a;

    printf("%d", *r);
    printf("%d", *p);

    return 0;
}
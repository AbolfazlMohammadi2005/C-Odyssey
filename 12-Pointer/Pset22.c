#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a = 2;
    int b = 3;

    swap(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
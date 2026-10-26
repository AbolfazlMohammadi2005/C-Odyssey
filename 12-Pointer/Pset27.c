#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = malloc(sizeof(int));
    *p = 3;
    printf("%d\n", *p);
    *p = 2;
    printf("%d\n", *p);
    free(p);

    int *a;
    a = malloc(2 * sizeof(int));
    printf("%d\n", a[0] + a[1]);
    free(a);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    a = malloc(sizeof(int));
    *a = 10;
    printf("%d\n", *a);
    free(a);

    int *b;
    b = malloc(3 * sizeof(int));
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    for (int i = 0; i < 3; i++)
        printf("%d ", b[i]);
    printf("\n");
    free(b);

    return 0;
}
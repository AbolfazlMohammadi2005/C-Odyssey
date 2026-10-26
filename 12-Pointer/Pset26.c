#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int *b;
    int s;

    a = malloc(sizeof(int));
    if (!a) exit(1);

    b = malloc(sizeof(int));
    if (!b) exit(1);

    scanf("%d", a);
    scanf("%d", b);

    s = *a + *b;

    printf("%d\n", s);

    free(a);
    free(b);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int *f(int *);

int main()
{
    int *p;
    int k = 0;
    int s = 0;

    p = f(&k);

    for (int i = 0; i < k; i++)
        s += p[i];

    printf("\n\nSum = %d\n", s);

    free(p);

    return 0;
}

int *f(int *n)
{
    printf("\n\nEnter n: ");
    scanf("%d", n);

    int *a = malloc(*n * sizeof(int));

    for (int i = 0; i < *n; i++)
    {
        printf("\nEnter number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    return a;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int *a = NULL;
    int *p;
    int size = 0, c = 0, i;

    printf("\nEnter numbers (Ctrl+D to end): \n");

    while (scanf("%d", &x))
    {
        if (c >= size)
        {
            p = malloc(size + 3 * sizeof(int));

            for (i = 0; i < size; ++i)
                p[i] = a[i];

            free(a);

            a = p;
            size += 3;
        }
        a[c++] = x;
    }

    if (c == 0)
        printf("No valid input!\n");
    else
    {
        int sum = 0;
        for (i = 0; i < c; i++)
            sum += a[i];

        printf("\nThe average: %g\n", (float)(sum) / c);
    }

    free(a);

    return 0;
}
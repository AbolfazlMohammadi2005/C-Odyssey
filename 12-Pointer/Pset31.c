#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selection_sort(int arr[], int len);
void swap(int *a, int *b);

int main()
{
    int i, len = 10;

    int *a = malloc(len * sizeof(int));

    srand((unsigned)time(NULL));

    for (i = 0; i < len; ++i)
        a[i] = rand() % 9;

    selection_sort(a, len);

    printf("Sorted array: \n");
    for (i = 0; i < len; ++i)
        printf("%5d", a[i]);

    printf("\n");

    free(a);

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int *x, int size)
{
    int *p, *m, *end;

    end = x + size - 1;

    for (; x < end; ++x)
    {
        m = x;
        for (p = x + 1; p <= end; ++p)
            if (*p < *m)
                m = p;

        swap(x, m);
    }
}
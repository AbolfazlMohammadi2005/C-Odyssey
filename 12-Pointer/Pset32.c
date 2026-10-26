#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int arr[], int len);
int *merge(int v1[], int len1, int v2[], int len2);
static inline void swap(int *a, int *b);

int main()
{
    int i, len1 = 4, len2 = 2;

    int *a1 = malloc(len1 * sizeof(int));
    int *a2 = malloc(len2 * sizeof(int));

    srand((unsigned)time(NULL));

    for (i = 0; i < len1; ++i)
        a1[i] = rand() % 100 + 1;

    for (i = 0; i < len2; ++i)
        a2[i] = rand() % 100 + 1;

    sort(a1, len1);
    printf("Sorted array1: \n");
    for (i = 0; i < len1; ++i)
        printf("%12d", a1[i]);
    printf("\n\n");

    sort(a2, len2);
    printf("Sorted array2: \n");
    for (i = 0; i < len2; ++i)
        printf("%12d", a2[i]);
    printf("\n\n");

    int *a3 = merge(a1, len1, a2, len2);
    int len3 = len1 + len2;

    printf("Merged array: \n");
    for (i = 0; i < len3; ++i)
        printf("%12d", a3[i]);
    printf("\n\n");

    free(a1);
    free(a2);
    free(a3);

    return 0;
}

static inline void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a, int len)
{
    int *p, *m;
    int *end = a + len - 1;

    for (; a < end; ++a)
    {
        m = a;
        for (p = a + 1; p <= end; ++p)
            if (*p < *m)
                m = p;
        swap(a, m);
    }
}

int *merge(int v1[], int len1, int v2[], int len2)
{
    int k = 0, i = 0, j = 0;
    int *a = malloc(len1 + len2 * sizeof(int));

    for (; i < len1 && j < len2; ++k)
    {
        if (v1[i] <= v2[j])
            a[k] = v1[i++];
        else
            a[k] = v2[j++];
    }

    while (i < len1)
        a[k++] = v1[i++];

    while (j < len2)
        a[k++] = v2[j++];

    return a;
}
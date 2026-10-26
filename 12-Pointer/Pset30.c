#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *f(int v1[], int len1, int v2[], int len2, int pos);

int main()
{
    int i, len1 = 3, len2 = 2;

    int *a1 = malloc(len1 * sizeof(int));
    int *a2 = malloc(len2 * sizeof(int));

    srand((unsigned)time(NULL));

    for (i = 0; i < len1; ++i)
        a1[i] = rand() % 100;

    printf("array1: \n");
    for (i = 0; i < len1; ++i)
        printf("%15d", a1[i]);
    printf("\n");

    for (i = 0; i < len2; ++i)
        a2[i] = rand() % 100;

    printf("array2: \n");
    for (i = 0; i < len2; ++i)
        printf("%15d", a2[i]);

    printf("\n");

    printf("\nWhat position? ");
    int pos;
    scanf("%d", &pos);

    int *a3, len3;
    len3 = len1 + len2;

    a3 = f(a1, len1, a2, len2, pos);

    if (a3 == NULL)
        fprintf(stderr, "\nInvalid position!\n\n");
    else
    {
        printf("New array: \n");
        for (i = 0; i < len3; ++i)
            printf("%15d", a3[i]);
        printf("\n");
    }

    free(a1);
    free(a2);
    free(a3);

    return 0;
}

int *f(int v1[], int len1, int v2[], int len2, int pos)
{
    if (pos < 0 || pos > len1)
        return NULL;

    int i = 0, j = 0, k = 0;

    int *a = malloc(len1 + len2 * sizeof(int));

    for (i = 0; i < pos; ++i, ++k)
        a[k] = v1[i];

    for (j = 0; j < len2; ++j, ++k)
        a[k] = v2[j];

    for (; i < len1; ++i, ++k)
        a[k] = v1[i];

    return a;
}
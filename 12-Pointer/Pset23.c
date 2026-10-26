#include <stdio.h>

void swap(int *, int *);
void sort(int [], int);

int main()
{
    enum { size = 8 };
    int a[size] = {2, 4, 6, 3, 1, 5, 8, 7};

    sort(a, size);

    for (int i = 0; i < size; i++)
        printf("%d  ", a[i]);

    printf("\n");

    return 0;
}

void sort(int a[], int n)
{
    int *p = a;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            if (*(p + j) > *(p + j + 1))
                swap((p + j), (p + j + 1));
}

void swap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
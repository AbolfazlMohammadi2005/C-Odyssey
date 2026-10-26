#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int *a;
    a = malloc(n * sizeof(int));

    printf("\nEnter numbers:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int s = 0;
    for (int j = 0; j < n; j++)
        s += a[j];

    printf("Sum = %d\n", s);

    free(a);

    return 0;
}
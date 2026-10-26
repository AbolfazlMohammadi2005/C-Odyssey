#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[100];
    
    for(int i = 0; i < n; i++)
    {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    int max = a[0];
    int index = 0;
    
    for(int j = 1; j < n; j++)
    {
        if(a[j] > max)
        {
            max = a[j];
            index = j;
        }
    }
    
    printf("\nMaximum value: %d\n", max);
    printf("Index of maximum value: %d\n", index);
    
    return 0;
}
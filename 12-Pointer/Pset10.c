#include <stdio.h>

int main()
{
    int a[] = {5, 7, 2};
    int* p;
    
    p = a;
    
    *(p + 1) = 8;
    
    for(int i = 0; i <= 2; i++)
        printf("%d\n", *(p + i));
    
    return 0;
}
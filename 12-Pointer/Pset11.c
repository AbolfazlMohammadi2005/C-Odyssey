#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int* p;
    
    p = a + 4;
    
    for(int i = 1; i <= 5; i++)
    {
        printf("%d\n", *p);
        p--;
    }
    
    return 0;
}
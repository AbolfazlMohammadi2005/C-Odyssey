#include <stdio.h>

int main()
{
    int a[] = {4, 2, 3, 10, 1, 6, 3};
    int *p, *q;
    
    p = a;
    q = a + 6;
    
    do {
        printf("%d\n", *p + *q);
        p++;
        q--;
    } while(p != q);
    
    return 0;
}
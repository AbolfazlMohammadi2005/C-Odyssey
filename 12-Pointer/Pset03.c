#include <stdio.h>

int main()
{
    int n = 3;
    int* p;
    
    p = &n;
    
    printf("%d\n", n);
    printf("%d\n", *p);
    printf("%d\n", *&n);
    printf("%p\n", (void*)p);
    printf("%p\n", (void*)(&n));
    
    return 0;
}
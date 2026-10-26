#include <stdio.h>

int main()
{
    int a = 7;
    int* p;
    p = &a;
    
    int** q;
    q = &p;
    
    printf("%d\n", *p);
    printf("%d\n", **q);
    printf("%p\n", (void*)p);
    printf("%p\n", (void*)(*q));
    
    return 0;
}
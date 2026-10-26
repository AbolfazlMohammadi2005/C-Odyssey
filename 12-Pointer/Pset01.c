#include <stdio.h>

int main()
{
    int a = 7;
    int* p;
    
    p = &a;
    
    printf("%d\n", *p);
    printf("%p\n", (void*)p);
    
    return 0;
}
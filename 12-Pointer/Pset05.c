#include <stdio.h>

int main()
{
    int x = 5;
    int* p = &x;
    
    printf("%p\n", (void*)p);
    
    p = p - 1;
    
    printf("%p\n", (void*)p);
    
    return 0;
}
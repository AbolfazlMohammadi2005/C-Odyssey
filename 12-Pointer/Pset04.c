#include <stdio.h>

int main()
{
    int x = 1;
    int y = 2;
    
    int* px;
    int* py;
    
    px = &x;
    py = &y;
    
    printf("%p\n", (void*)px);
    printf("%p\n", (void*)py);
    
    py = px;
    
    printf("%p\n", (void*)px);
    printf("%p\n", (void*)py);
    
    printf("%d\n", *px);
    printf("%d\n", *py);
    
    
    return 0;
}
#include <stdio.h>

int main()
{
    int x = 3;
    int* px = &x;
    
    int y = 5;
    int* py = &y;
    
    printf("%ld\n", py - px);
    
    if(px == py)
        printf("equal");
    else
        printf("not equal");
    
    return 0;
}
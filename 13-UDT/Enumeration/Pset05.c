#include <stdio.h>

int main()
{
    typedef enum x { a = 12, b, c, d, e } x;
    x v1 = a;
    x v2 = e;
    
    for(int i = v1; i <= v2; i++)
        printf("%d\n", i);
    
    return 0;
}
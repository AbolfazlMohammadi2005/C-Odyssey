#include <stdio.h>

typedef struct a
{
    int n;
    float f;
} a;

int main()
{
    a x;
    a* p;
    
    x.n = 5;
    p = &x;
    p->n = 8;
    
    printf("%d", x.n);
    
    return 0;
}
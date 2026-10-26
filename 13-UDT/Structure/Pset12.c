#include <stdio.h>

typedef struct a
{
    float x;
    float y;
    float z;
} a;

void f(struct a*);

int main()
{
    a m;
    m.x = 2;
    m.y = 4;
    
    f(&m);
    
    printf("%g", m.z);
    
    return 0;
}

void f(a* t)
{
    t->z = t->x * t->y;
}
#include <stdio.h>

typedef enum a { Zero, One, Two, Three, Four } a;
a x;

void f(a v);
a g();

int main()
{
    f(Two);
    printf("%d", (int)g());
    
    return 0;
}

void f(a v)
{
    x = v;
}

a g()
{
    return x;
}
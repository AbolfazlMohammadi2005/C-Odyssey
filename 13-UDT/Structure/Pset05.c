#include <stdio.h>

typedef struct Time
{
    int h, m, s;
} Time;

int main()
{
    Time t1, t2;
    
    t1.h = 7;
    t1.m = 0;
    t1.s = 0;
    
    t2 = t1;
    t2.h++;
    printf("%d\n", t2.h);
    
    Time* p;
    p = &t2;
    
    printf("%d\n", p->h);
    printf("%d\n", (*p).h);
    
    return 0;
}
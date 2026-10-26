#include <stdio.h>

struct a {
    char* b;
    long c;
    union d {
        int e;
        char f;
    } u;
} s;

int main()
{
    s.c = 123;
    s.u.e = 65;
    printf("%c", s.u.f);
    
    return 0;
}
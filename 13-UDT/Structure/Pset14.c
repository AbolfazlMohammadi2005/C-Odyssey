#include <stdio.h>
#include <string.h>

typedef struct mystruct
{
    int x;
    int y;
} mystruct;

int main()
{
    mystruct s, d;
    s.x = 2;
    s.y = 6;
    
    memcpy(&d, &s, sizeof(s));
    
    printf("%d\n", d.x);
    printf("%d\n", d.y);
    
    return 0;
}
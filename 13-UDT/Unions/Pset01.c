#include <stdio.h>

union a {
    unsigned int x;      // 4 bytes
    unsigned int y[2];   // 8 bytes
};

int main()
{
    union a u;
    printf("%zu\n", sizeof(u));
    
    u.y[0] = 9;
    u.y[1] = 2;
    
    printf("%u\n", u.x);
    
    u.x = 5;
    printf("%u\n", u.y[0]);
    printf("%u", u.y[1]);
    
    return 0;
}
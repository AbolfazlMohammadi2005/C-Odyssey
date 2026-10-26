#include <stdio.h>
#include <stdbool.h>

struct s {
    int y;
    int x;
} a[5];

int main()
{
    
    printf("%s\n", ((&a[0] == a)) ? "true" : "false");
    printf("%s\n", ((&a[0] < &a[2])) ? "true" : "false");
    printf("%s\n", ((&a[5] > &a[4])) ? "true" : "false");
    printf("%s\n", ((&a[0].x < &a[0].y)) ? "true" : "false");
    
    return 0;
}
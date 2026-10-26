#include <stdio.h>

int main()
{
    enum x { a, b, c };
    
    int x = 8;
    
    {
        int a = 5;
        printf("Inner a: %d\n", a);
    }
    
    {
        int a = 10;
        printf("Inner a: %d\n", a);
    }
    
    printf("Enum x value a: %d\n", a);
    printf("Variable x: %d\n", x);
    
    return 0;
}
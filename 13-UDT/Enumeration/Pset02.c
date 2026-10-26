#include <stdio.h>

int main()
{
    int x;
    
    enum data { A = 3, B = 4, C = 2 }; 
    
    x = A * B * C;
    
    printf("%d", x);
    
    return 0;
}
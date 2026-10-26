#include <stdio.h>

int main()
{
    enum x { A, B, C, D };
    enum y { AB, BC };
    
    printf("Enum x values:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    
    printf("\nEnum y values:\n");
    printf("AB = %d\n", AB);
    printf("BC = %d\n", BC);
    
    printf("\nOperations:\n");
    printf("A + BC = %d\n", A + BC);
    printf("C * AB = %d\n", C * AB);
    
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int f(int);

int main() {
    int n;
    char ch;
    
    printf("=================================\n");
    printf("        ODD or EVEN CHECKER       \n");
    printf("=================================\n");
    
    while (true) {
        printf("\nEnter a number: ");
        scanf("%d", &n);
        
        if (f(n))
            printf("Result: %d is ODD!\n", n);
        else
            printf("Result: %d is EVEN!\n", n);
        
        printf("\n---------------------------------\n");
        printf("Continue? (y/n): ");
        scanf(" %c", &ch);
        printf("---------------------------------\n");
        
        if (ch == 'n' || ch == 'N')
            break;
    }
    
    printf("\nProgram terminated. Goodbye!\n");
    return 0;
}

int f(int x) {
    if (x % 2 == 0)
        return 0;
    else
        return 1;
}
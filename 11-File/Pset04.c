#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[100];
    float x;
    
    FILE *f1 = fopen("D", "w");
    if (!f1) {
        fprintf(stderr, "Error: Could not open file for writing!\n");
        exit(1);
    }
    
    printf("Enter (name and number) - Ctrl+Z/Ctrl+D to stop:\n");
    
    while (scanf("%99s %f", s, &x) == 2)
        fprintf(f1, "%s %g ", s, x);
    
    fclose(f1);
    
    printf("\nOutput:\n");
    
    FILE *f2 = fopen("D", "r");
    if (!f2) {
        fprintf(stderr, "Error: Could not open file for reading!\n");
        exit(1);
    }
    
    while (fscanf(f2, "%99s %f", s, &x) == 2) {
        printf("%s  %g\n", s, x);
    }
    
    fclose(f2);
    
    return 0;
}

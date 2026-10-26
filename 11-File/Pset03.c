#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[10];
    
    FILE *f1 = fopen("C", "w");
    if (!f1) {
        fprintf(stderr, "Error: Could not open file for writing!\n");
        exit(1);
    }
    
    printf("Enter words (Ctrl+Z or Ctrl+D to stop):\n");
    
    while (scanf("%9s", s) == 1)
        fprintf(f1, "%s ", s);
    
    fclose(f1);
    
    printf("\nOutput:\n");
    
    FILE *f2 = fopen("C", "r");
    if (!f2) {
        fprintf(stderr, "Error: Could not open file for reading!\n");
        exit(1);
    }
    
    fscanf(f2, "%9s", s);
    while (!feof(f2)) {
        printf("%s\n", s);
        fscanf(f2, "%9s", s);
    }
    
    fclose(f2);
    
    return 0;
}

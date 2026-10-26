#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    
    FILE *f1 = fopen("B", "wb");
    if (!f1) {
        fprintf(stderr, "Error: Could not open file for writing!\n");
        exit(1);
    }
    
    printf("Enter text (press Enter to stop):\n");
    
    do {
        ch = getchar();
        if (ch == '\n') break;
        fputc(ch, f1);
    } while (1);
    
    fclose(f1);
    
    printf("\nOutput:\n");
    
    FILE *f2 = fopen("B", "rb");
    if (!f2) {
        fprintf(stderr, "Error: Could not open file for reading!\n");
        exit(1);
    }
    
    ch = fgetc(f2);
    while (!feof(f2)) {
        printf("%c", ch);
        ch = fgetc(f2);
    }
    
    fclose(f2);
    
    return 0;
}

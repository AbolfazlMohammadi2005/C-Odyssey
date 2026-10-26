#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    char exitKey;
    
    FILE *f1 = fopen("A.txt", "w");
    if (!f1) {
        fprintf(stderr, "Error: Could not open file for writing!\n");
        exit(1);
    }
    
    printf("Enter text (press $ to stop writing):\n");
    
    do {
        ch = getchar();
        if (ch != '$') {
            fputc(ch, f1);
        }
    } while (ch != '$');
    
    fclose(f1);
    printf("File saved successfully!\n\n");
    
    printf("Reading from file...\n");
    printf("Output:\n");
    
    FILE *f2 = fopen("A.txt", "r");
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
    
    printf("\n\nPress any key + Enter to exit... ");
    scanf(" %c", &exitKey);
    
    return 0;
}

#include <stdio.h>

int main() {
    char s[80];
    int ch;
    
    FILE *f1 = fopen("E", "r");
    if (f1) {
        while ((ch = fgetc(f1)) != EOF)
            printf("%c", ch);
        fclose(f1);
    }
    
    FILE *f2 = fopen("E", "a");
    if (!f2)
        return 1;
    
    printf("\nEnter : ");
    scanf("%79s", s);
    
    fprintf(f2, "%s\n", s);
    fclose(f2);
    
    return 0;
}

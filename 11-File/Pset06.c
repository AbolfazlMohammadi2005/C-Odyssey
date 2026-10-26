#include <stdio.h>

int main() {
    int b[5] = {10, 11, 12, 13, 14};
    
    FILE *f1 = fopen("F.dat", "wb");
    if (!f1) {
        fprintf(stderr, "Error: Cannot create file!\n");
        return 1;
    }
    
    fwrite(b, 1, sizeof(b), f1);
    fclose(f1);
    
    int b2[5] = {0};
    
    FILE *f2 = fopen("F.dat", "rb");
    if (!f2) {
        fprintf(stderr, "Error: Cannot open file for reading!\n");
        return 1;
    }
    
    fread(b2, 1, sizeof(b2), f2);
    fclose(f2);
    
    for (int i = 0; i < 5; i++)
        printf("%d  ", b2[i]);
    
    return 0;
}

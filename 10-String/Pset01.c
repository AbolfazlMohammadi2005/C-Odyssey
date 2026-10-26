#include <stdio.h>

int main() {
    char a[4] = {'a', 'l', 'i', '\0'};
    printf("%s\n", a);

    char b[4] = "ali";
    printf("%s\n", b);

    const char *c = "ali"; 
    printf("%s\n", c);

    return 0;
}
#include <stdio.h>

char s[20] = "Fereidoon Yaychi.";
char *f(int);

int main()
{
    *f(7) = ',';
    printf("%s\n", s);

    return 0;
}

char *f(int i)
{
    return &s[i];
}
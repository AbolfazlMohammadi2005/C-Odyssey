#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f(const char *);

int main()
{
    char s[80];
    printf("enter s:");
    scanf("%79s", s);
    printf("%d", f(s));
    
    return 0;
}

int f(const char *s)
{
    int c = 0;
    for(; *s != '\0'; s++)
        c++;
    return c;
}
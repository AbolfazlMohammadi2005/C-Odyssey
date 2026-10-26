#include <stdio.h>
#include <string.h>

typedef struct Name {
    char firstname[80];
    char lastname[80];
} Name;

typedef struct Date {
    int day;
    int month;
    int year;
} Date;

typedef struct Person {
    Name n;
    Date b;
} Person;

int main()
{
    Person h = { { "Fereydoon", "Yaychi" }, { 1, 4, 2000 } };
    
    printf("%zu\n", sizeof(h));
    printf("%s\n", h.n.firstname);
    printf("%d\n", h.b.year);
    
    return 0;
}
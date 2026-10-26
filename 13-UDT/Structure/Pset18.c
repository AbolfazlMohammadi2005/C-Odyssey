#include <stdio.h>
#include <string.h>

struct Name {
    char firstname[80];
    char lastname[80];
};

void Name_show(struct Name *self) { printf("%s %s\n", self->firstname, self->lastname); }

struct Date {
    int day;
    int month;
    int year;
};

void Date_show(struct Date *self) { printf("%d/%d/%d\n", self->month, self->day, self->year); }

struct Person {
    struct Name n;
    struct Date b;
};

void Person_show(struct Person *self) { printf("\n"); Name_show(&self->n); printf("Birthday: "); Date_show(&self->b); }

int main()
{
    struct Person h = { { "Fereydoon", "Yaychi" }, { 13, 2, 2005 } };
    Person_show(&h);
    return 0;
}

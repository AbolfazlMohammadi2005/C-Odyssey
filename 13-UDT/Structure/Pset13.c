#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    int id;
};

void f(struct student*);

int main()
{
    struct student s;
    
    s.id = 12345;
    strcpy(s.name, "ali");
    
    f(&s);
    
    return 0;
}

void f(struct student* p)
{
    printf("%d\n", p->id);
    printf("%s\n", p->name);
}
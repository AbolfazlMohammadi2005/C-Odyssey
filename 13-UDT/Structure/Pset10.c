#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Length 2

typedef struct Employee {
    char name[50];
    int id;
} Employee;
Employee e[Length];

void f(Employee t);

int main()
{
    char b[50];
    
    for(int i = 0; i < Length; i++)
    {
        printf("Enter name: ");
        fgets(e[i].name, 50, stdin);
        e[i].name[strcspn(e[i].name, "\n")] = '\0';
        
        printf("Enter id: ");
        fgets(b, 50, stdin);
        b[strcspn(b, "\n")] = '\0';
        e[i].id = atoi(b);
    }
    
    printf("\nYou have entered these employees:\n");
    
    for(int n = 0; n < Length; n++)
        f(e[n]);
    
    return 0;
}

void f(Employee t)
{
    printf("%s", t.name);
    printf(" %d\n", t.id);
}
#include <stdio.h>
#include <string.h>

typedef struct a {
    char Name[10];
    int id;
} a;

void f(a t);
void g(a* p);
void h(a* r);

int main()
{
    a x[8];
    
    x[0].id = 1;
    
    f(x[0]);
    printf("%d\n", x[0].id);
    
    g(&x[0]);
    printf("%d\n", x[0].id);
    
    h(&x[0]);
    printf("%d\n", x[0].id);
    
    return 0;
}

void f(a t) { t.id += 3; }
void g(a* p) { p->id += 3; }
void h(a* r) { r->id += 3; }
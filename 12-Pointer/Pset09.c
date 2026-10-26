#include <stdio.h>

int main()
{
    int a = 3;
    
    int *p, **q, ***t;
    
    p = &a;
    q = &p;
    t = &q;
    
    // t -> q -> p -> a
    
    printf("%d\n", *p);
    printf("%d\n", **q);
    printf("%d\n", ***t);
    
    printf("\n\n....................\n\n");
    
    printf("%p\n", (void*)p);
    printf("%p\n", (void*)q);
    printf("%p\n", (void*)t);
    
    printf("\n\n....................\n\n");
    
    printf("%p\n", (void*)(*q));
    printf("%p\n", (void*)(**t));
    
    printf("%p\n", (void*)(*t));
    
    return 0;
}
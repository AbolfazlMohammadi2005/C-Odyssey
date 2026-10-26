#include <stdio.h>

int main()
{
    int a = 3;
    int* pa;
    pa = &a;
    printf("%d\n", *pa);
    
    float f = 2.8;
    float* pf;
    pf = &f;
    printf("%g\n", *pf);
    
    char c = 'F';
    char* pc;
    pc = &c;
    printf("%c\n", *pc);
    
    double d = 17.015;
    double* pd;
    pd = &d;
    printf("%g\n", *pd);
    
    printf("\n\n...................\n\n");
    
    printf("%zu\n", sizeof(pa));
    printf("%zu\n", sizeof(pc));
    printf("%zu\n", sizeof(pf));
    printf("%zu\n", sizeof(pd));
    
    return 0;
}
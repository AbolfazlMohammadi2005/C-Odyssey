#include <stdio.h>

int main()
{
    int a = 2;
    int* pa = &a;
    
    *pa = 7;
    printf("%d\n", *pa);
    printf("%d\n", a);
    
    int b = 3;
    const int* pb = &b;
    // *pb = 8;              // error: cannot modify through const pointer
    pb = &a;
    printf("%d\n", *pb);
    
    int c = 4;
    int* const pc = &c;
    *pc = 9;
    // pc = &b;              // error: pointer is const (cannot change address)
    printf("%d\n", *pc);
    
    int d = 4;
    const int* const pd = &d;
    // *pd = 9;              // error: cannot modify value
    // pd = &a;              // error: pointer is const (cannot change address)
    printf("%d\n", *pd);
    
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    
    char s[] = "1234567ah89";
    char *p;
    long int x;
    
    x = strtol(s, &p, 10);
    
    printf("%ld\n", x);    // 1234567        
    printf("%s\n", p);     // ah89
    
    printf("\n=======================\n\n");
    
    char s1[] = "10afh5k";
    char *p1;
    long int n;
    
    n = strtol(s1, &p1, 16);
    
    printf("%lx\n", n);     // 10af (in hex) -> decimal: 4271
    printf("%s\n", p1);            // h5k
    
    printf("\n=======================\n\n");
    

    char s2[] = "12.3abc45";
    char *p2;
    double d;
    
    d = strtod(s2, &p2);
    printf("%g\n", d);    // 12.3     
    printf("%s\n", p2);    // abc45
    
    return 0;
}
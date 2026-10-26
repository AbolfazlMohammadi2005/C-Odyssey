#include <stdio.h>
#include <math.h>

typedef struct a
{
    float radius;
    double angle;
} a;

typedef struct b
{
    float area;
    double sine;
} b;

b f(struct a);

int main()
{
    a k;
    k.radius = 3;
    k.angle = 0.8;
    
    b y;
    y = f(k);
    
    printf(" area : %g\n", y.area);
    printf(" sine : %g\n", y.sine);
    
    return 0;
}

b f(struct a m)
{
    b x;
    x.area = pow(m.radius, 2);
    x.sine = sin(m.angle);
    
    return x;
}
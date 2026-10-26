#include <stdio.h>

struct s {
    double a;
} m;

void s_f(struct s *self, int x) { self->a = x; }
int s_g(struct s *self) { int y; y = self->a * self->a; return y; }

int main()
{
    s_f(&m, 4);
    printf("%d", s_g(&m));
    
    return 0;
}

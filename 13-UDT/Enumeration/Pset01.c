#include <stdio.h>

int main()
{
    enum Day { Sat, Sun, Mon, Tues, Wednes, Thurs, Fri };
    
    printf("%d\n", Sat);
    printf("%d\n", Tues + Mon);
    printf("%d\n", Fri - Sat);
    printf("%d\n", Wednes / Mon);
    
    return 0;
}
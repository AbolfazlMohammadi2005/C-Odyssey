#include <stdio.h>
#include <time.h>

int main() {
    time_t now1 = time(NULL);
    
    time_t now2;
    time(&now2);
    
    printf("%ld\n", now1);
    printf("%ld\n", now2);
    
    return 0;
}
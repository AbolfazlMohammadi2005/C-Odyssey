#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    
    printf("%s", ctime(&now));
    
    struct tm* local = localtime(&now);
    printf("%s", asctime(local));
    
    return 0;
}
#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    struct tm* local_time = localtime(&now);
    
    char buffer[80];
    
    strftime(buffer, sizeof(buffer), "%Y/%m/%d %H:%M:%S", local_time);
    printf("%s\n", buffer);
    
    strftime(buffer, sizeof(buffer), "%A %B %d, %Y", local_time);
    printf("%s\n", buffer);
    
    return 0;
}
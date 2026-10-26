#include <stdio.h>
#include <time.h>

int main() {
    time_t now = time(NULL);
    struct tm* local_time = localtime(&now);
    
    printf("%d\n", local_time->tm_year + 1900);
    printf("%d\n", local_time->tm_mon + 1);
    printf("%d\n", local_time->tm_mday);
    printf("%d\n", local_time->tm_hour);
    printf("%d\n", local_time->tm_min);
    printf("%d\n", local_time->tm_sec);
    printf("%d\n", local_time->tm_wday);
    printf("%d\n", local_time->tm_yday);
    
    return 0;
}
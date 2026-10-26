#include <stdio.h>
#include <time.h>

int main() {
    time_t timestamp = time(NULL);
    printf("%s", ctime(&timestamp));
    return 0;
}
#include <stdio.h>

void my_function(void (*func)()) {
    func();
    func();
}

void message() {
    printf("Hello World!\n");
}

int main() {
    my_function(message);
    return 0;
}

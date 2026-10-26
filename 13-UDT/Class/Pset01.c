#include <stdio.h>

typedef struct GradeBook {
    char unused;
} GradeBook;

void GradeBook_displayMessage(GradeBook *self) {
    printf("Welcome to the Grade Book!\n");
}

int main() {
    GradeBook myGradeBook;
    GradeBook_displayMessage(&myGradeBook);
    return 0;
}
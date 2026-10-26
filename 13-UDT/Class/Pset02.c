#include <stdio.h>
#include <string.h>

typedef struct GradeBook {
    char unused;
} GradeBook;

void GradeBook_displayMessage(GradeBook *self, const char *courseName) {
    printf("Welcome to the grade book for\n%s\n", courseName);
}

int main() {
    char nameOfCourse[100];
    GradeBook myGradeBook;
    
    printf("Please enter course name: \n");
    fgets(nameOfCourse, sizeof(nameOfCourse), stdin);
    nameOfCourse[strcspn(nameOfCourse, "\n")] = '\0';
    
    printf("\n");
    GradeBook_displayMessage(&myGradeBook, nameOfCourse);
    return 0;
}
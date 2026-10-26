#include <stdio.h>
#include <string.h>

typedef struct GradeBook {
    char courseName[100];
} GradeBook;

void GradeBook_setCourseName(GradeBook *self, const char *name) {
    strcpy(self->courseName, name);
}

const char *GradeBook_getCourseName(GradeBook *self) {
    return self->courseName;
}

void GradeBook_displayMessage(GradeBook *self) {
    printf("Welcome to grade book for\n%s\n", GradeBook_getCourseName(self));
}

int main() {
    char nameOfCourse[100];
    GradeBook myGradeBook = {""};
    
    printf("Initial course name: \n");
    printf("%s\n", GradeBook_getCourseName(&myGradeBook));
    
    printf("\nPlease enter the course name: \n");
    fgets(nameOfCourse, sizeof(nameOfCourse), stdin);
    nameOfCourse[strcspn(nameOfCourse, "\n")] = '\0';
    GradeBook_setCourseName(&myGradeBook, nameOfCourse);
    
    printf("\n");
    GradeBook_displayMessage(&myGradeBook);
    return 0;
}
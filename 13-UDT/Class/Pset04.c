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
    printf("Welcome to the grade book for\n%s\n", GradeBook_getCourseName(self));
}

GradeBook GradeBook_create(const char *name) {
    GradeBook self;
    GradeBook_setCourseName(&self, name);
    return self;
}

int main() {
    GradeBook gradeBook1 = GradeBook_create("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2 = GradeBook_create("CS102 Data Structures in C++");
    
    printf("gradeBook1 created for course: %s\ngradeBook2 created for course: %s\n", GradeBook_getCourseName(&gradeBook1), GradeBook_getCourseName(&gradeBook2));
    return 0;
}
#include <stdio.h>
#include "Gradebook.h"

int main() {
    GradeBook gradeBook1;
    GradeBook_init(&gradeBook1, "CS101 Introduction to C++ Programming");
    GradeBook gradeBook2;
    GradeBook_init(&gradeBook2, "CS102 Data Structures in C++");

    printf("gradeBook1 created for course: %s\ngradeBook2 created for course: %s\n", GradeBook_getCourseName(&gradeBook1), GradeBook_getCourseName(&gradeBook2));

    return 0;
}
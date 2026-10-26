#include <stdio.h>
#include <string.h>

typedef struct GradeBook {
    char courseName[100];
} GradeBook;

static inline void GradeBook_setCourseName(GradeBook *self, const char *name) {
    strcpy(self->courseName, name);
}

static inline void GradeBook_init(GradeBook *self, const char *name) {
    GradeBook_setCourseName(self, name);
}

static inline const char *GradeBook_getCourseName(GradeBook *self) {
    return self->courseName;
}

static inline void GradeBook_displayMessage(GradeBook *self) {
    printf("Welcome to the grade book for\n%s!\n", GradeBook_getCourseName(self));
}

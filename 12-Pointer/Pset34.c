#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, i, j;
    float **student;
    int *exam;

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    student = malloc(n * sizeof(float *));
    exam = malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        printf("\n\n\nEnter number of exams for student %d: ", i + 1);
        scanf("%d", &exam[i]);

        student[i] = malloc(exam[i] * sizeof(float));

        s = 0;
        for (j = 0; j < exam[i]; j++)
        {
            printf("Grade %d: ", j + 1);
            scanf("%f", &student[i][j]);
            s += student[i][j];
        }
        printf("Average = %g", (float)(s) / exam[i]);
    }

    for (i = 0; i < n; i++)
        free(student[i]);

    free(student);
    free(exam);

    return 0;
}
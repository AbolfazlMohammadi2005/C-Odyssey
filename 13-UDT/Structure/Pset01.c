#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int grade[3];
};

int main()
{
    struct student s;
    
    strcpy(s.name, "Fereydoon Yaychi");
    
    s.grade[0] = 19;
    s.grade[1] = 18;
    s.grade[2] = 14;
    
    printf("name  : %s\n", s.name);
    printf("grade : ");
    
    for(int k = 0; k <= 2; k++)
        printf("%d  ", s.grade[k]);
    
    return 0;
}
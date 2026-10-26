#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int grade[3];
} s[2];

int main()
{
    strcpy(s[0].name, "Fereydoon Yaychi");
    strcpy(s[1].name, "Anoshirevan bageri");
    
    s[0].grade[0] = 20;
    s[0].grade[1] = 17;
    s[0].grade[2] = 18;
    
    s[1].grade[0] = 16;
    s[1].grade[1] = 20;
    s[1].grade[2] = 19;
    
    for(int i = 0; i <= 1; i++)
    {
        printf("\n  name : %s", s[i].name);
        printf("\n grade : ");
        
        for(int j = 0; j <= 2; j++)
            printf("%4d", s[i].grade[j]);
        
        printf("\n");
    }
    
    return 0;
}
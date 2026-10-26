#include <stdio.h>
#include <string.h>

struct st
{
    char name[20];
    float score;
};

int main()
{
    struct st a[3];
    struct st* p;
    
    p = a;
    
    for(int i = 0; p <= a + 2; p++, i++)
    {
        printf("Enter all data of student :[%d]\n", i);
        scanf("%19s", a[i].name);
        scanf("%f", &p->score);
    }
    
    printf("record name score\n");
    
    p = a;
    for(; p <= a + 2; p++)
        printf("%s  %g\n", p->name, p->score);
    
    return 0;
}
#include <stdio.h>

int main()
{
    int i, temp = 0;
    float max;
    
    struct student
    {
        int num;
        float score;
    };
    
    struct student stu[3];
    
    for(i = 0; i <= 2; i++)
        scanf("%d %f", &stu[i].num, &stu[i].score);
    
    max = stu[0].score;
    
    for(i = 1; i <= 2; i++)
    {
        if(stu[i].score > max)
        {
            max = stu[i].score;
            temp = i;
        }
    }
    
    struct student* p;
    p = stu + temp;
    
    printf("maxmum score:%d", p->num);
    
    return 0;
}
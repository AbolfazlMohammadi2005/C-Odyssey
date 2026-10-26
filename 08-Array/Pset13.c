#include <stdio.h>

int findmax(int [], int); 
void read(int [], int *);

int main()
{
    int a[10];
    int i = 0;
   
    read(a, &i);
   
    if (i > 0) {
        printf("max=%d", findmax(a, i));
    }
     
    return 0;
} 

void read(int a[], int *i)
{
    do {
        printf("a[%d]:", *i);
        scanf("%d", &a[*i]);
    } while(a[(*i)++] != 0 && *i < 10);
    --*i;
}

int findmax(int a[], int c)
{
    if (c == 0) return 0;
    int max = a[0];
    for(int j = 1; j < c; j++)
        if (a[j] > max)
            max = a[j];
    return max;	       
}
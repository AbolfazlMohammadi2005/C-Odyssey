#include <stdio.h>

void f();
int y=6;       // global

int main()
{
  int x=3;    //local
  printf("x in main=%d\n", x);
  f();
  y++;
  printf("y in main=%d\n", y);
  x+=5;
  printf("x in main=%d\n", x);
  
  return 0;
}

void f()
{
	int x=5;   //local
	printf("x in f=%d\n", x);
	printf("y in f=%d\n", y);
}


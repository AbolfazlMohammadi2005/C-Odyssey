#include <stdio.h>

void f();
void g();

int main()
{
	
  f(); 
  g();
  f();
  
  return 0;
}
int x=1;  // global

void f(){
	printf(" x in f:  %d\n", x);
	x+=5;
}
void g(){
	printf(" x in g:  %d\n", x);
	x-=2;
}

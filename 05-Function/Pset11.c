#include <stdio.h>

int vorod();
int inc(int);

int main()
{
  int x;
 
  printf("%d\n", inc(vorod()));

  return 0;  
}

int vorod()
{
	int a;
	do{
		printf("\nEnter a:");
		scanf("%d", &a);
	} while(a<0);
	
	return a;
}

int inc(int k)
{
	return k+1;
}


#include <stdio.h>
#include <ctype.h>

int main()
{
  char ch;
  int ca = 0, cd = 0, can = 0;
  
  while(((ch = getchar()) != EOF))
  {
    if(isalpha(ch))
        ++ca;
    if(isdigit(ch))
        ++cd;
    if(isalnum(ch))
        ++can;
    if(ch == '.')      
        break;
  }
  
  printf("\n╔════════════════════════════════╗\n");
  printf("║         CHARACTER COUNT        ║\n");
  printf("╠════════════════════════════════╣\n");
  printf("║ Letters  : %d                   ║\n", ca);
  printf("║ Digits   : %d                   ║\n", cd);
  printf("║ Alnum    : %d                   ║\n", can);
  printf("╚════════════════════════════════╝\n");
  
  return 0;
}
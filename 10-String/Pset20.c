// String     s.at(n)    s1.assign(s2)   s1.append(s2)  s.substr(n1,n2)   s.erase(n1,n2)   
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  char s[] = "abcde";    // string s="abcde";
  printf("%c", s[2]);    //c   
  printf("\n---------\n");
  
  char s1[100];
  char s2[] = "ali";
  strcpy(s1, s2);       // s1=s2;
  printf("%s", s1);    //ali     
  printf("\n---------\n");
  
  char p[100] = "amir";
  strcat(p, "ali");   // p=p+"ali";
  printf("%s", p);    //amirali     
  printf("\n---------\n");
  
  char t[] = "abcdefgh";
  printf("%.*s", 3, t + 2);    //cde  
  printf("\n---------\n");
  
  char s3[] = "abcdefg";
  memmove(s3 + 2, s3 + 5, strlen(s3 + 5) + 1);   //abfg
  printf("%s", s3);     
  
  getch();
}

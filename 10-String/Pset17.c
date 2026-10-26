#include <stdio.h>
#include <string.h>

int main()
{
   char r[] = "abcd";
   printf("%s", (char*)(memset(r, 'f', 3)));   // fffd

   printf("\n.......\n");
	   
   char a1[10] = "abcd";
   char a2[10] = "hij";
   memcpy(a1, a2, 2);
   printf("%s", a1);    // hijd
     
   printf("\n.......\n");
   
   printf("%d", memcmp("abcd", "abef", 3));   // -1
   
   printf("\n.......\n");
      
   char s[] = "abcde";
   printf("%s", (char*)(memmove(s, &s[1], 2)));  // bccde
      
   printf("\n.......\n");
   
   char t[] = "abcdcef";
   printf("%s", (char*)(memchr(t, 'c', 3)));  // cdcef
   
   return 0;
}
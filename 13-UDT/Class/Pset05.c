#include <stdio.h>
#include <string.h>

typedef struct MyClass {
    int myNum;
    char myString[100];
} MyClass;

int main() {
  MyClass myObj;
  myObj.myNum = 15;
  strcpy(myObj.myString, "Some text");
  
  printf("%d\n", myObj.myNum);
  printf("%s\n", myObj.myString);
  return 0;
}
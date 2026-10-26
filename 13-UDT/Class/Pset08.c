#include <stdio.h>

typedef struct MyClass {
    char unused;
} MyClass;

void MyClass_myMethod(MyClass *self) {
  printf("Hello World!");
}

int main() {
  MyClass myObj;
  MyClass_myMethod(&myObj);
  return 0;
}
#include <stdio.h>

typedef struct MyClass {
    char unused;
} MyClass;

void MyClass_myFunction(MyClass *self) {
  printf("Some content in parent class.");
}

typedef struct MyChild {
    MyClass base;
} MyChild;

typedef struct MyGrandChild {
    MyChild base;
} MyGrandChild;

int main() {
  MyGrandChild myObj;
  MyClass_myFunction(&myObj.base.base);
  return 0;
}
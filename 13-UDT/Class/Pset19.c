#include <stdio.h>

typedef struct MyClass {
    char unused;
} MyClass;

void MyClass_myFunction(MyClass *self) {
  printf("Some content in parent class.");
}

typedef struct MyOtherClass {
    char unused;
} MyOtherClass;

void MyOtherClass_myOtherFunction(MyOtherClass *self) {
  printf("Some content in another class.");
}

typedef struct MyChildClass {
    MyClass base1;
    MyOtherClass base2;
} MyChildClass;

int main() {
  MyChildClass myObj;
  MyClass_myFunction(&myObj.base1);
  MyOtherClass_myOtherFunction(&myObj.base2);
  return 0;
}
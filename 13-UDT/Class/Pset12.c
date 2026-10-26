#include <stdio.h>

typedef struct MyClass {
    char unused;
} MyClass;

void MyClass_init(MyClass *self) {
  printf("Hello World!");
}

int main() {
  MyClass myObj;
  MyClass_init(&myObj);
  return 0;
}
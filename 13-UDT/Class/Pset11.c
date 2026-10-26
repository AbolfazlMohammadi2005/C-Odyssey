#include <stdio.h>

typedef struct Dog {
    char unused;
} Dog;

void Dog_bark(Dog *self) {
  printf("Woof!");
}

int main() {
  Dog myDog;
  Dog_bark(&myDog);
  return 0;
}
#include <stdio.h>

typedef struct Animal {
    char unused;
} Animal;

void Animal_sound(Animal *self) {
  printf("Animal sound\n");
}

typedef struct Dog {
    Animal base;
} Dog;

void Dog_sound(Dog *self) {
  printf("Dog barks\n");
}

int main() {
  Animal* a;
  Dog d;
  a = &d.base;
  Animal_sound(a);
  return 0;
}
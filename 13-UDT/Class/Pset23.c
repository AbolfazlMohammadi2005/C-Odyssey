#include <stdio.h>

typedef struct Animal {
    void (*sound)(struct Animal *self);
} Animal;

void Animal_sound(Animal *self) {
  printf("Animal sound\n");
}

void Animal_init(Animal *self) {
  self->sound = Animal_sound;
}

typedef struct Dog {
    Animal base;
} Dog;

void Dog_sound(Animal *self) {
  printf("Dog barks\n");
}

void Dog_init(Dog *self) {
  Animal_init(&self->base);
  self->base.sound = Dog_sound;
}

int main() {
  Animal* a;
  Dog d;
  Dog_init(&d);
  a = &d.base;
  a->sound(a);
  return 0;
}
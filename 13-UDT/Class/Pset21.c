#include <stdio.h>

typedef struct Animal {
    char unused;
} Animal;

void Animal_animalSound(Animal *self) {
  printf("The animal makes a sound \n");
}

typedef struct Pig {
    Animal base;
} Pig;

void Pig_animalSound(Pig *self) {
  printf("The pig says: wee wee \n");
}

typedef struct Dog {
    Animal base;
} Dog;

void Dog_animalSound(Dog *self) {
  printf("The dog says: bow wow \n");
}

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;
  Animal_animalSound(&myAnimal);
  Pig_animalSound(&myPig);
  Dog_animalSound(&myDog);
  return 0;
}
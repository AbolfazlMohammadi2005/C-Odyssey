#include <stdio.h>
#include <string.h>

typedef struct Vehicle {
    char brand[50];
} Vehicle;

void Vehicle_init(Vehicle *self) {
  strcpy(self->brand, "Ford");
}

void Vehicle_honk(Vehicle *self) {
  printf("Tuut, tuut! \n");
}

typedef struct Car {
    Vehicle base;
    char model[50];
} Car;

void Car_init(Car *self) {
  Vehicle_init(&self->base);
  strcpy(self->model, "Mustang");
}

int main() {
  Car myCar;
  Car_init(&myCar);
  Vehicle_honk(&myCar.base);
  printf("%s %s", myCar.base.brand, myCar.model);
  return 0;
}
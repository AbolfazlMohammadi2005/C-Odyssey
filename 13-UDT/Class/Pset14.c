#include <stdio.h>
#include <string.h>

typedef struct Car {
    char brand[50];
    char model[50];
    int year;
} Car;

void Car_init(Car *self, const char *x, const char *y, int z);

void Car_init(Car *self, const char *x, const char *y, int z) {
  strcpy(self->brand, x);
  strcpy(self->model, y);
  self->year = z;
}

int main() {
  Car carObj1;
  Car_init(&carObj1, "BMW", "X5", 1999);
  Car carObj2;
  Car_init(&carObj2, "Ford", "Mustang", 1969);

  printf("%s %s %d\n", carObj1.brand, carObj1.model, carObj1.year);
  printf("%s %s %d\n", carObj2.brand, carObj2.model, carObj2.year);
  return 0;
}
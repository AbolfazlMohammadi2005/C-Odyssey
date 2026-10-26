#include <stdio.h>
#include <string.h>

typedef struct Car {
    char brand[50];   
    char model[50];
    int year;
} Car;

int main() {
  Car carObj1;
  strcpy(carObj1.brand, "BMW");
  strcpy(carObj1.model, "X5");
  carObj1.year = 1999;

  Car carObj2;
  strcpy(carObj2.brand, "Ford");
  strcpy(carObj2.model, "Mustang");
  carObj2.year = 1969;

  printf("%s %s %d\n", carObj1.brand, carObj1.model, carObj1.year);
  printf("%s %s %d\n", carObj2.brand, carObj2.model, carObj2.year);
  return 0;
}
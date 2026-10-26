#include <stdio.h>

typedef struct Car {
    char unused;
} Car;

int Car_speed(Car *self, int maxSpeed);

int Car_speed(Car *self, int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj;
  printf("%d", Car_speed(&myObj, 200));
  return 0;
}
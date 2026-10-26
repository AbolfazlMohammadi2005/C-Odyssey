#include <stdio.h>

typedef struct Car {
    const char *brand;
    int year;
} Car;

void Car_increment_year(Car *self) {
    ++self->year;
}

void Car_display(const Car *self) {
    printf("The %s is now from year %d.\n", self->brand, self->year);
}

int main() {
    Car my_car = {"Toyota", 2020};
    Car_increment_year(&my_car);
    Car_display(&my_car);
    return 0;
}

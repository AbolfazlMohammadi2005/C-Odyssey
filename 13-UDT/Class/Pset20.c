#include <stdio.h>

typedef struct Employee {
    int salary;
} Employee;

typedef struct Programmer {
    Employee base;
    int bonus;
} Programmer;

void Programmer_setSalary(Programmer *self, int s) {
  self->base.salary = s;
}

int Programmer_getSalary(Programmer *self) {
  return self->base.salary;
}

int main() {
  Programmer myObj;
  Programmer_setSalary(&myObj, 50000);
  myObj.bonus = 15000;
  printf("Salary: %d\n", Programmer_getSalary(&myObj));
  printf("Bonus: %d\n", myObj.bonus);
  return 0;
}
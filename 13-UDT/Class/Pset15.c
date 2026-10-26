#include <stdio.h>

typedef struct Employee {
    int salary;
} Employee;

void Employee_setSalary(Employee *self, int s) {
  self->salary = s;
}

int Employee_getSalary(Employee *self) {
  return self->salary;
}

int main() {
  Employee myObj;
  Employee_setSalary(&myObj, 50000);
  printf("%d", Employee_getSalary(&myObj));
  return 0;
}
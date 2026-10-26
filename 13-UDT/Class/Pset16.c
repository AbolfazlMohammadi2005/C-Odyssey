#include <stdio.h>

typedef struct Employee {
    int salary;
} Employee;

void Employee_init(Employee *self, int s) {
  self->salary = s;
}

void displaySalary(Employee emp) {
  printf("Salary: %d", emp.salary);
}

int main() {
  Employee myEmp;
  Employee_init(&myEmp, 50000);
  displaySalary(myEmp);
  return 0;
}
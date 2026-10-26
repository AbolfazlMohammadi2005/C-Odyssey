#include <stdio.h>

void swap_nums(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int first_num, second_num;

    printf("Enter first number: ");
    scanf("%d", &first_num);

    printf("Enter second number: ");
    scanf("%d", &second_num);

    printf("\nBefore swap:\n");
    printf("%d %d\n", first_num, second_num);

    swap_nums(&first_num, &second_num);

    printf("After swap:\n");
    printf("%d %d\n", first_num, second_num);

    return 0;
}
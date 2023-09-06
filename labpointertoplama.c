#include <stdio.h>

void addNumbers(int *num1, int *num2, int *sum) {
    *sum = *num1 + *num2;
}

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    addNumbers(&num1, &num2, &sum);

    printf("Sum: %d\n", sum);

    return 0;
}

//pointerların değerini çağırarak pointer kullandım



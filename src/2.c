
// math_calculator.c

#include <stdio.h>

int main() {
    int num1;
    int num2;
    char operator;
    float result;

    // Get input numbers and operator from user
    printf("Enter two numbers: ");
    scanf("%d %c", &num1, &operator);
    printf("Enter another number: ");
    scanf("%d", &num2);

    // Perform operation based on operator
    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        result = num1 / num2;
    } else {
        printf("Invalid operator.\n");
        return 1;
    }

    // Print result
    printf("%d %c %d = %f\n", num1, operator, num2, result);

    return 0;
}
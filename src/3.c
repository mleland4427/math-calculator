// Math Calculator
#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;
    char op;
    float result;

    // Get input from user
    printf("Enter two numbers: ");
    scanf("%d %c", &num1, &op);
    printf("Enter another number: ");
    scanf("%d", &num2);

    // Process operation
    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        printf("Invalid operation. Try again.");
        return 0;
    }

    // Print result
    printf("%d %c %d = %f", num1, op, num2, result);

    return 0;
}

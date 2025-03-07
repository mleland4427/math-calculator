#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %c", &num1, &op);
    scanf("%d", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.");
                return 1;
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("Invalid operator.");
            return 1;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}

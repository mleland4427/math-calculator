#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    int result;

    printf("Enter two numbers: ");
    scanf("%d %c", &num1, &op);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    } else {
        printf("Invalid operator\n");
        return 0;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}

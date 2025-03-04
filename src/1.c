int main() {
    int num1 = 0;
    int num2 = 0;
    char operator = '+';
    switch(operator) {
        case '+':
            printf("Sum of %d and %d is %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Difference of %d and %d is %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Product of %d and %d is %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 == 0) {
                printf("Error: Division by zero is undefined\n");
            } else {
                printf("Quotient of %d and %d is %d\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Invalid operator entered. Please try again.");
    }
}

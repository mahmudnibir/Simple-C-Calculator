#include <stdio.h>

int main() {
    char operator; // Single character to store the operator
    float a, b;

    // Prompt user for input
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Read one character

    // Perform calculation based on the operator
    if (operator == '+') {
        printf("The sum of the numbers is %f\n", a + b);
    } else if (operator == '-') {
        printf("The subtraction of the numbers is %f\n", a - b);
    } else if (operator == '*') {
        printf("The multiplication of the numbers is %f\n", a * b);
    } else if (operator == '/') {
        if (b != 0) {
            printf("The division of the numbers is %f\n", a / b);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}

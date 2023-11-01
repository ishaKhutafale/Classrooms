#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Simple Calculator\n");
    printf("Enter an operator (+, -, *, /, ^): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
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
            if (num2 != 0)
                result = num1 / num2;
            else
                printf("Error: Division by zero\n");
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
        printf("%d %c %d = %d\n", num1, operator, num2, result);
    } else if (operator == '^') {
        printf("%d ^ %d = %d\n", num1, num2, result);
    }

    return 0;
}


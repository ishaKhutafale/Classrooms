#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    char operator;
    double result;
    unsigned int hex_result;
    char input[100];

    printf("Calculator\n");
    printf("Enter an operator (+, -, *, /, ^ for decimal, h for hexadecimal): ");
    scanf(" %c", &operator);

    if (operator == 'h') {
        // Hexadecimal input
        unsigned int hex_num1, hex_num2;

        printf("Enter two hexadecimal numbers (e.g., A5 2F): ");
        scanf("%x %x", &hex_num1, &hex_num2);

        switch (operator) {
            case 'h':
                printf("Choose an operation (+, -, *, /): ");
                scanf(" %c", &operator);

                switch (operator) {
                    case '+':
                        hex_result = hex_num1 + hex_num2;
                        break;
                    case '-':
                        hex_result = hex_num1 - hex_num2;
                        break;
                    case '*':
                        hex_result = hex_num1 * hex_num2;
                        break;
                    case '/':
                        if (hex_num2 != 0) {
                            hex_result = hex_num1 / hex_num2;
                        } else {
                            printf("Error: Division by zero\n");
                            return 1;
                        }
                        break;
                    default:
                        printf("Error: Invalid operator for hexadecimal\n");
                        return 1;
                }

                printf("Result in hexadecimal: %X\n", hex_result);
                break;

            default:
                printf("Error: Invalid operator\n");
                return 1;
        }
    } else {
        // Decimal input
        double num1, num2;

        printf("Enter two decimal numbers: ");
        scanf("%lf %lf", &num1, &num2);

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
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error: Division by zero\n");
                    return 1;
                }
                break;
            case '^':
                result = pow(num1, num2);
                break;
            default:
                printf("Error: Invalid operator\n");
                return 1;
        }

        printf("Result in decimal: %.2lf\n", result);
    }

    return 0;
}


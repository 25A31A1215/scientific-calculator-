---

# calculator.c

```c
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n===== SCIENTIFIC CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Modulus\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                if(num2 != 0)
                    printf("Result = %.2lf\n", num1 / num2);
                else
                    printf("Division by zero is not allowed!\n");

                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);

                result = pow(num1, num2);

                printf("Result = %.2lf\n", result);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);

                if(num1 >= 0)
                    printf("Result = %.2lf\n", sqrt(num1));
                else
                    printf("Square root of negative number is not possible!\n");

                break;

            case 7:
                int a, b;
                printf("Enter two integers: ");
                scanf("%d %d", &a, &b);

                printf("Result = %d\n", a % b);
                break;

            case 8:
                printf("Exiting Calculator...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}